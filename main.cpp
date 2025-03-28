#include "Serie.hpp"
#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

using namespace ftxui;
int main(int argc, char const *argv[])
{
    Screen pantalla = screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );
    
    auto document = ftxui::hbox({
        vbox(spinner(1,1))
    });

ftxui::Render(pantalla, document);

return EXIT_SUCCESS;

    
    }
   

