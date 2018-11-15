#include <iostream>
#include <SDL.h>

//Screen dimension constants
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 960;

//Draws geometry on the canvas
void draw(int x ,int y);
void draw2(int x, int y);
void draw3(int x, int y);

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

void draw(int x , int y)
{
     x = SCREEN_WIDTH/2;
     y = SCREEN_HEIGHT/2;
     int space = 5;
    for (int i = 0; i < SCREEN_WIDTH /space; ++i)
    {
        SDL_SetRenderDrawColor(gRenderer, 255 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);

        SDL_RenderDrawLine(gRenderer, i * space ,0 ,x,y);
    }
        for (int j = 0; j < SCREEN_HEIGHT / space; ++j)
        {
            SDL_SetRenderDrawColor(gRenderer, 255 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH,j * space ,x,y);
        }

    for (int k = 0; k < SCREEN_WIDTH/space; ++k)
    {
        SDL_SetRenderDrawColor(gRenderer, 255 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);

        SDL_RenderDrawLine(gRenderer, k * space ,SCREEN_HEIGHT ,x,y);
    }

    for (int k = 0; k < SCREEN_HEIGHT/space; ++k)
    {
        SDL_SetRenderDrawColor(gRenderer, 255 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);

        SDL_RenderDrawLine(gRenderer, 0 ,k * space ,x,y);
    }

}

void draw2(int x , int y) {

    x = SCREEN_WIDTH / 2;
    y = SCREEN_HEIGHT / 2;
    int space = 10;
    for (int i = 0; i < SCREEN_WIDTH / space; ++i) {
        SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0 /*B*/, 0xFF /*A*/);

        SDL_RenderDrawLine(gRenderer, i * space, 0, x, y);
    }
    for (int j = 0; j < SCREEN_HEIGHT / space; ++j) {
        SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0 /*B*/, 0xFF /*A*/);

        SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH, j * space, x, y);
    }

    for (int k = 0; k < SCREEN_WIDTH / space; ++k) {
        SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0 /*B*/, 0xFF /*A*/);

        SDL_RenderDrawLine(gRenderer, k * space, SCREEN_HEIGHT, x, y);
    }

    for (int k = 0; k < SCREEN_HEIGHT / space; ++k) {
        SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0 /*B*/, 0xFF /*A*/);

        SDL_RenderDrawLine(gRenderer, 0, k * space, x, y);
    }
}
    void draw3(int x , int y)
    {
        x = SCREEN_WIDTH/2;
        y = SCREEN_HEIGHT/2;
        int space = 20;
        for (int i = 0; i < SCREEN_WIDTH /space; ++i)
        {
            SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 0 /*G*/, 255 /*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, i * space ,0 ,x,y);
        }
        for (int j = 0; j < SCREEN_HEIGHT / space; ++j)
        {
            SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 0 /*G*/, 255 /*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH,j * space ,x,y);
        }

        for (int k = 0; k < SCREEN_WIDTH/space; ++k)
        {
            SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 0 /*G*/, 255 /*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, k * space ,SCREEN_HEIGHT ,x,y);
        }

        for (int k = 0; k < SCREEN_HEIGHT/space; ++k)
        {
            SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 0 /*G*/, 255 /*B*/, 0xFF /*A*/);

            SDL_RenderDrawLine(gRenderer, 0 ,k * space ,x,y);
        }
    }

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Function to center", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
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
    int x, y;
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

        draw(x, y);
        draw2(x , y);
        draw3(x , y);

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}