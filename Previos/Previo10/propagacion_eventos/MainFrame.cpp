#include "MainFrame.hpp"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);

    wxButton* button1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));
    wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 50));

    this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);
    this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);
    button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
    button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);

    CreateStatusBar();
}

void MainFrame::OnClose(wxCloseEvent& evt) {
    wxLogMessage("Close Event");
    evt.Skip(); // Se propaga el evento
}

void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {
    wxLogMessage("Button Clicked");
    evt.Skip(); // Se propaga el evento
}

void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
    wxLogStatus("Button 1 Clicked");
}

void MainFrame::OnButton2Clicked(wxCommandEvent& evt) {
    wxLogStatus("Button 2 Clicked");
}

// Se crea un frame con dos botones, y se asocian los eventos wxEVT_CLOSE_WINDOW y wxEVT_BUTTON a los métodos OnClose y OnAnyButtonClicked respectivamente.
// Además, se asocian los eventos wxEVT_BUTTON a los métodos OnButton1Clicked y OnButton2Clicked a los botones button1 y button2 respectivamente.

// Se puede observar que se asocian eventos a los controles y al frame, y se propaga el evento con evt.Skip() en cada método.