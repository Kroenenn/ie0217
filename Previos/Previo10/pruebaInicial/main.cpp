#include <wx/wx.h>

class App : public wxApp {
public:
    bool OnInit() {
        wxFrame* window = new wxFrame(NULL, wxID_ANY, "GUI Test", wxDefaultPosition, wxSize(600, 400));
        wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
        wxStaticText* text = new wxStaticText(window, wxID_ANY, "Well Done!\nEverything seems to be working", wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL);
        text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
        sizer->Add(text, 1, wxALIGN_CENTER);
        window->SetSizer(sizer);
        window->Show();
        return true;
    }
};

wxIMPLEMENT_APP(App);

// De este archivo se puede observar que se crea una aplicación de wxWidgets que muestra una ventana con un texto centrado en la ventana.
// Se puede observar que se crea un objeto de la clase wxFrame, un objeto de la clase wxBoxSizer y un objeto de la clase wxStaticText.

// Se puede observar que se crea un objeto de la clase App que hereda de wxApp, y se implementa el método OnInit que crea una ventana con un texto centrado en la ventana.

// Se usa ->SetFont para establecer el tamaño y el estilo de la fuente del texto.
// Se usa ->Add para agregar el texto al sizer.
// Se usa ->SetSizer para establecer el sizer en la ventana.
