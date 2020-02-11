#include "Window.hpp"
#include <string>

#include "SDL2/SDL.h"

int main(){
    short height = 400;
    short width = 800;
    std::string windowName = "Window 1";

    SDL_Init(SDL_INIT_VIDEO);

    {   
    window::Window screen1(width, height, windowName);

    SDL_Delay(5000);
    }

    SDL_Quit();
    return 0;
}