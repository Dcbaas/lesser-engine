#include "SDL2/SDL.h"
#include <string>
#include <cstring>
#include <Window.hpp>

namespace window
{
    Window::Window(WindowLength length, WindowHeight height, std::string windowName): 
    length(length), height(height), windowName(windowName){
        window = SDL_CreateWindow(windowName.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
        this->length, this->height, SDL_WINDOW_OPENGL);
    }

    Window::~Window(){
        SDL_DestroyWindow(window);
    }
} // namespace window
