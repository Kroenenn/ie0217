#include "MainFrame.hpp"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);

    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 275), wxSize(200, 50));
    wxSlider* slider = new wxSlider(panel, wxID_ANY, 0, 0 , 100, wxPoint(300, 200), wxSize(200, -1));
    wxTextCtrl* text = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(300, 375), wxSize(200, -1));

    button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
    slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
    text->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged, this);

    button->Unbind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);

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

// De este archivo se puede observar que se crean los controles de la interfaz gráfica de usuario, como botones, cajas de texto, etc.
// Se puede observar que se crean controles de tipo wxButton, wxSlider y wxTextCtrl.

// se usa ->Bind para asociar un evento a un control, en este caso se asocian los eventos wxEVT_BUTTON, wxEVT_SLIDER y wxEVT_TEXT a los controles button, slider y text respectivamente.
