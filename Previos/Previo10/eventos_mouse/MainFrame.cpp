#include "MainFrame.hpp"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 100));

    wxStatusBar* statusBar = CreateStatusBar();
    statusBar->SetDoubleBuffered(true);

    panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
    button->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
}

void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
    wxPoint mousePos = wxGetMousePosition(); // Posición absoluta basada en la pantalla.
    mousePos = this->ScreenToClient(mousePos); // Posición relativa basada en el frame.
    wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);
    wxLogStatus(message);
}

// Se crea un método OnMouseEvent que se ejecuta cuando se produce un evento wxEVT_MOTION en el panel o en el botón.
// En este método se obtiene la posición del mouse en la pantalla y se convierte a la posición relativa al frame.
// Se muestra un mensaje en la barra de estado con la posición del mouse.
// Se asocia el evento wxEVT_MOTION al método OnMouseEvent en el panel y en el botón.
