#include "MainFrame.hpp"

enum IDs {
    BUTTON_ID = 2,
    SLIDER_ID = 3,
    TEXT_ID = 4
};

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(BUTTON_ID, MainFrame::OnButtonClicked)
    EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
    EVT_TEXT(TEXT_ID, MainFrame::OnTextChanged)
wxEND_EVENT_TABLE()

// Se crea una tabla de eventos con wxBEGIN_EVENT_TABLE y wxEND_EVENT_TABLE, en la que se asocian los eventos wxEVT_BUTTON, wxEVT_SLIDER y wxEVT_TEXT a los métodos OnButtonClicked, OnSliderChanged y OnTextChanged respectivamente.

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);

    wxButton* button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(300, 275), wxSize(200, 50));

    wxSlider* slider = new wxSlider(panel, SLIDER_ID, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));

    wxTextCtrl* text = new wxTextCtrl(panel, TEXT_ID, "", wxPoint(300, 375), wxSize(200, -1));

    CreateStatusBar();
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
    wxLogStatus("Button Clicked");
}

void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
    wxString str = wxString::Format("Slider Value: %d", evt.GetInt());
    wxLogStatus(str);
}

void MainFrame::OnTextChanged(wxCommandEvent& evt) {
    wxString str = wxString::Format("Text: %s", evt.GetString());
    wxLogStatus(str);
}

// Se crean los métodos OnButtonClicked, OnSliderChanged y OnTextChanged, que se ejecutan cuando se produce un evento wxEVT_BUTTON, wxEVT_SLIDER y wxEVT_TEXT respectivamente.
