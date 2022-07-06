#include "/home/throne/The_Maze/headers/header.h"

/**
   *initWindow - Initialize SDL and Create a resizable window
   *
*/

void createWindow()
{
SDL_Init(SDL_INIT_EVERYTHING);
window = SDL_CreateWindow("Valkyrie",
SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
SCREEN_WIDTH, SCREEN_HEIGHT,
SDL_WINDOW_SHOWN);
if (window == NULL)
{
printf("Window could not be created! SDL_Error:%s\n", SDL_GetError());
}
return;
}

/**
  *renderScreen - Renders the screen and makes it resizable
  */
void renderScreen()
{
renderer = SDL_CreateRenderer(window, -1,
SDL_RENDERER_ACCELERATED
| SDL_RENDERER_PRESENTVSYNC);
SDL_SetWindowResizable(window, SDL_TRUE);
return;
}

/**
  *Game loop with closing event


void gameRun()
{
bool gamerun = true;
while (gamerun)
{
SDL_Event ev;
if (SDL_PollEvent(&ev))
{
if (ev.type == SDL_QUIT)
gamerun = false;
}
}
return;
}
*/
/**
 * destroyWindow - Destroy window when and clean up
*/
/**
void events(int py, int px)
{
bool gamerun = true;
while (gamerun)
{
SDL_Event ev;
while (SDL_PollEvent(&ev))
{
switch(ev.type)
case SDL_QUIT:
gamerun = false;
break;
}

switch(ev.type)
case SDL_KEYDOWN:
switch(ev.key.keysym.sym)
{
case SDLK_w:
py -= 10;
break;
case SDLK_s:
py += 10;
break;
case SDLK_a:
px += 10;
break;
case SDLK_d:
px -= 10;
break;
}
}
return;
}
*/

void destroyWindow()
{
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
SDL_Quit();
return;
}
