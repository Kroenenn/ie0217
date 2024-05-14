#include "MyApp.hpp"
#include "MainFrame.hpp"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
    MainFrame* mainFrame = new MainFrame("C++ GUI");
    // mainFrame->SetClientSize(800, 600);
    // mainFrame->Center();
    mainFrame->Show();
    return true;
}


// Se crea un objeto de la clase MainFrame y se muestra la ventana.
// Se retorna true para indicar que la aplicación se ha inicializado correctamente.