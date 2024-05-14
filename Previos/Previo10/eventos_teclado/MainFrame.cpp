#include "MainFrame.hpp"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxWANTS_CHARS);
    wxButton* btn1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 150), wxSize(200, 100));
    wxButton* btn2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 100));

    panel->Bind(wxEVT_CHAR_HOOK, &MainFrame::OnKeyEvent, this);

    CreateStatusBar();
}

// Se crea un panel con dos botones, y se asocia el evento wxEVT_CHAR_HOOK al método OnKeyEvent en el panel.


// Tuve que implementar el metodo OnKeyEvent en la clase MainFrame, ya que si no lo implementaba,
// me tiraba un error de compilacion que decia que no se podia encontrar la referencia al metodo
// Aqui tambien me di cuenta que si no se pone el wxKeyEvent& evt como parametro, no se puede usar el wxLogMessage
void MainFrame::OnKeyEvent(wxKeyEvent& evt) {

    wxLogMessage("Key pressed: %d", evt.GetKeyCode());

    evt.Skip();
}
