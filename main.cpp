#include <SDL3/SDL.h>

int main(int argc, char* argv[])
{
    // Start SDL
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        return 1;
    }

    // Create a window
    SDL_Window* window = SDL_CreateWindow(
        "My SDL3 Window",
        800,
        600,
        0
    );

    if (!window)
    {
        SDL_Quit();
        return 1;
    }

    bool running = true;
    SDL_Event event;

    // Main loop
    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                running = false;
            }
        }

        SDL_Delay(16); // ~60 FPS
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}