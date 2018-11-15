#include "SDL.h"
#include <math.h>
#include <stdio.h>

#define SCR_WDT  1280
#define SCR_HGT  960

const int SCR_CEN_X = SCR_WDT / 2;
const int SCR_CEN_Y = SCR_HGT / 2;

void DrawCircle( SDL_Renderer *r );
void DrawCircle2( SDL_Renderer *r );
void DrawCircle3( SDL_Renderer *r );
void DrawCircle4( SDL_Renderer *r );
void DrawCircle5( SDL_Renderer *r );
void DrawCircle6( SDL_Renderer *r );
void Drawlines(SDL_Renderer *renderer );




int main ( int argc, char *argv[] )
{
    SDL_Init ( SDL_INIT_VIDEO );
    SDL_Window *window = SDL_CreateWindow ( "Drawing a Circle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCR_WDT, SCR_HGT, 0 );
    SDL_Renderer *renderer = SDL_CreateRenderer ( window, -1, SDL_RENDERER_SOFTWARE );
    float distance;
    float angle_in_degree;
    float center_x;
    float center_y;

    bool is_running = true;
    while ( is_running )
    {
        SDL_Event event;
        if ( SDL_PollEvent( &event ))
        {
            if ( event.type == SDL_QUIT )
            {
                is_running = false;
            }
        }

        SDL_RenderClear ( renderer );

        DrawCircle( renderer );
        DrawCircle2(renderer);
        DrawCircle3(renderer);
        DrawCircle4(renderer);
        DrawCircle5(renderer);
        DrawCircle6(renderer);
        Drawlines(renderer);



        SDL_SetRenderDrawColor ( renderer, 255, 255, 255, 255 );
        SDL_RenderPresent ( renderer );
    }

    SDL_Quit ();

    return 0;
}

void DrawCircle( SDL_Renderer *r )
{
    int radius = 200;
    int new_x = 0;
    int new_y = 0;
    int old_x =  SCR_CEN_X + 200;
    int old_y = SCR_CEN_Y;
    float step = (M_PI * 2) / 50;

    SDL_SetRenderDrawColor ( r, 0, 0, 0, 255 );

    for ( float theta = 0; theta <= (M_PI * 2); theta += step )
    {
        new_x = SCR_CEN_X + (radius * cos ( theta ));
        new_y = SCR_CEN_Y - (radius * sin ( theta ));

        SDL_RenderDrawLine ( r, old_x, old_y, new_x, new_y );

        old_x = new_x;
        old_y = new_y;
    }

    new_x =  SCR_CEN_X + (radius * cos ( 0 ));
    new_y =  SCR_CEN_Y - (radius * sin ( 0 ));
    SDL_RenderDrawLine( r, old_x, old_y, new_x, new_y );

}

void DrawCircle2( SDL_Renderer *r )
{
    int radius = 180;
    int new_x = 0;
    int new_y = 0;
    int old_x =  SCR_CEN_X + 200;
    int old_y = SCR_CEN_Y;
    float step = (M_PI * 2) / 50;

    SDL_SetRenderDrawColor ( r, 0, 0, 0, 255 );

    for ( float theta = 0; theta <= (M_PI * 2); theta += step )
    {
        new_x = SCR_CEN_X + (radius * cos ( theta ));
        new_y = SCR_CEN_Y - (radius * sin ( theta ));

        SDL_RenderDrawLine ( r, old_x, old_y, new_x, new_y );

        old_x = new_x;
        old_y = new_y;
    }

    new_x =  SCR_CEN_X + (radius * cos ( 0 ));
    new_y =  SCR_CEN_Y - (radius * sin ( 0 ));
    SDL_RenderDrawLine( r, old_x, old_y, new_x, new_y );

}
void DrawCircle3( SDL_Renderer *r )
{
    int radius = 140;
    int new_x = 0;
    int new_y = 0;
    int old_x =  SCR_CEN_X + 200;
    int old_y = SCR_CEN_Y;
    float step = (M_PI * 2) / 50;

    SDL_SetRenderDrawColor ( r, 0, 0, 0, 255 );

    for ( float theta = 0; theta <= (M_PI * 2); theta += step )
    {
        new_x = SCR_CEN_X + (radius * cos ( theta ));
        new_y = SCR_CEN_Y - (radius * sin ( theta ));

        SDL_RenderDrawLine ( r, old_x, old_y, new_x, new_y );

        old_x = new_x;
        old_y = new_y;
    }

    new_x =  SCR_CEN_X + (radius * cos ( 0 ));
    new_y =  SCR_CEN_Y - (radius * sin ( 0 ));
    SDL_RenderDrawLine( r, old_x, old_y, new_x, new_y );

}
void DrawCircle4( SDL_Renderer *r )
{
    int radius = 120;
    int new_x = 0;
    int new_y = 0;
    int old_x =  SCR_CEN_X + 200;
    int old_y = SCR_CEN_Y;
    float step = (M_PI * 2) / 50;

    SDL_SetRenderDrawColor ( r, 0, 0, 0, 255 );

    for ( float theta = 0; theta <= (M_PI * 2); theta += step )
    {
        new_x = SCR_CEN_X + (radius * cos ( theta ));
        new_y = SCR_CEN_Y - (radius * sin ( theta ));

        SDL_RenderDrawLine ( r, old_x, old_y, new_x, new_y );

        old_x = new_x;
        old_y = new_y;
    }

    new_x =  SCR_CEN_X + (radius * cos ( 0 ));
    new_y =  SCR_CEN_Y - (radius * sin ( 0 ));
    SDL_RenderDrawLine( r, old_x, old_y, new_x, new_y );

}

void DrawCircle5( SDL_Renderer *r )
{
    int radius = 20;
    int new_x = 0;
    int new_y = 0;
    int old_x =  SCR_CEN_X + 200;
    int old_y = SCR_CEN_Y;
    float step = (M_PI * 2) / 50;

    SDL_SetRenderDrawColor ( r, 0, 0, 0, 255 );

    for ( float theta = 0; theta <= (M_PI * 2); theta += step )
    {
        new_x = SCR_CEN_X + (radius * cos ( theta ));
        new_y = SCR_CEN_Y - (radius * sin ( theta ));

        SDL_RenderDrawLine ( r, old_x, old_y, new_x, new_y );

        old_x = new_x;
        old_y = new_y;
    }

    new_x =  SCR_CEN_X + (radius * cos ( 0 ));
    new_y =  SCR_CEN_Y - (radius * sin ( 0 ));
    SDL_RenderDrawLine( r, old_x, old_y, new_x, new_y );

}
void DrawCircle6( SDL_Renderer *r )
{
    int radius = 10;
    int new_x = 0;
    int new_y = 0;
    int old_x =  SCR_CEN_X + 200;
    int old_y = SCR_CEN_Y;
    float step = (M_PI * 2) / 50;

    SDL_SetRenderDrawColor ( r, 0, 0, 0, 255 );

    for ( float theta = 0; theta <= (M_PI * 2); theta += step )
    {
        new_x = SCR_CEN_X + (radius * cos ( theta ));
        new_y = SCR_CEN_Y - (radius * sin ( theta ));

        SDL_RenderDrawLine ( r, old_x, old_y, new_x, new_y );

        old_x = new_x;
        old_y = new_y;
    }

    new_x =  SCR_CEN_X + (radius * cos ( 0 ));
    new_y =  SCR_CEN_Y - (radius * sin ( 0 ));
    SDL_RenderDrawLine( r, old_x, old_y, new_x, new_y );

}

void Drawlines(SDL_Renderer *renderer )
{

    for (int i = 0; i < SCR_CEN_X; ++i) {
        int x ,y;
        y =  SCR_CEN_Y/2 + 20* sin(18*3.14/180);
        x =  SCR_CEN_X/2 + 20 * cos(18*3.14/180);
        SDL_SetRenderDrawColor(renderer, 0 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);
        SDL_RenderDrawLine(renderer,SCR_CEN_X ,SCR_CEN_Y  ,x ,y);
        x +=18;
        y +=18;
    }







}


