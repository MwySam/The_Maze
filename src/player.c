#include "/home/throne/The_Maze/headers/header.h"


void events()
{
drawMap2D();
int py = 300;
int px = 300;
bool gamerun = true;
while (gamerun)
{
SDL_Event ev;
SDL_PollEvent(&ev);
{
switch(ev.type)
{
case SDL_QUIT:
gamerun = false;
break;

case SDL_KEYDOWN:
switch (ev.key.keysym.sym)
{
case SDLK_a: px-=10; break;
case SDLK_d: px+=10; break;
case SDLK_w: py-=10; break;
case SDLK_s: py+=10; break;
}
}
}
SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
SDL_RenderClear(renderer);
SDL_SetRenderDrawColor(renderer, 100, 0, 0, SDL_ALPHA_OPAQUE);
SDL_Rect rect = {px, py, 15, 15};
SDL_RenderDrawRect(renderer, &rect);
SDL_RenderFillRect(renderer, &rect);
SDL_RenderPresent(renderer);
}
return;
}
