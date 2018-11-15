
#include <iostream>
#include <SDL.h>

//Screen dimension constants
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 960;

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Four rectangles", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        int k,j;
        for (int i = 0; i < 3; ++i)
        {
            SDL_SetRenderDrawColor(gRenderer, 000, 000, 000, 0xFF);

            SDL_Rect fillRect = {2, 2,k,j};
            k++;
            j++;

            SDL_RenderFillRect( gRenderer, &fillRect );

            SDL_RenderPresent(gRenderer);
        }
        int x = SCREEN_WIDTH/2;
        int y = SCREEN_HEIGHT/2;
        int space = 20;
        for (int j = 0; j< SCREEN_WIDTH /space; ++j)
        {
            SDL_SetRenderDrawColor(gRenderer, 255 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, j * space ,0 ,x,y);
        }
        for (int j = 0; j < SCREEN_HEIGHT / space; ++j)
        {
            SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0 /*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH,j * space ,x,y);
        }

        for (int j= 0; j < SCREEN_WIDTH/space; ++j)
        {
            SDL_SetRenderDrawColor(gRenderer, 0/*R*/, 0 /*G*/, 255/*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, j * space ,SCREEN_HEIGHT ,x,y);
        }

        for (int j = 0; j< SCREEN_HEIGHT/space; ++j)
        {
            SDL_SetRenderDrawColor(gRenderer, 128 /*R*/, 0 /*G*/, 128/*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, 0 ,j * space ,x,y);
        }




        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}