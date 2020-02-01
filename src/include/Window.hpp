#include "SDL2/SDL.h"
#include <memory>
#include <string>

using WindowLength = u_int16_t;
using WindowHeight = u_int16_t;
namespace window{
    class Window{
    public:
        Window(WindowLength length, WindowHeight height);
        Window();
        void run();
        void setWindowSize(WindowLength length, WindowHeight height);
    private:
        WindowLength length;
        WindowHeight height;
        std::string windowName;

        std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window;
    };
}