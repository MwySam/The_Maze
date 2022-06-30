#include "/home/throne/game/headers/header.h"
float px = SCREEN_WIDTH/2;
float py = SCREEN_HEIGHT/2;
void player()
{
renderScreen();
events(int py, int px);
SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
SDL_RenderClear(renderer);
SDL_SetRenderDrawColor(renderer, 100, 0, 0, SDL_ALPHA_OPAQUE);
SDL_Rect rect;
    rect.x = px;
    rect.y = py;
    rect.w = 15;
    rect.h = 15;
SDL_RenderDrawRect(renderer, &rect);
SDL_RenderFillRect(renderer, &rect);
SDL_RenderPresent(renderer);

return;
}
