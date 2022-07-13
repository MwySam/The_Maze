#include "/home/throne/The_Maze/headers/header.h"


void events()
{
renderScreen();
int py = 350;
int px = 350;
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

case SDL_MOUSEMOTION:

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


SDL_SetRenderDrawColor(renderer, 0, 50, 70, SDL_ALPHA_OPAQUE);
SDL_RenderClear(renderer);
SDL_SetRenderDrawColor(renderer, 100, 255, 255, SDL_ALPHA_OPAQUE);

map2D();
SDL_SetRenderDrawColor(renderer, 100, 0, 0, SDL_ALPHA_OPAQUE);
SDL_Rect rect = {px, py, 15, 15};
SDL_RenderDrawRect(renderer, &rect);
SDL_RenderFillRect(renderer, &rect);
SDL_RenderPresent(renderer);
}
return;
}


int map[mapW][mapH] =
{

{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,2,2,2,2,2,0,0,0,0,3,0,3,0,3,0,0,0,1},
{1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,3,0,0,0,3,0,0,0,1},
{1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,2,2,0,2,2,0,0,0,0,3,0,3,0,3,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,6,0,6,6,6,6,6,1},
{1,0,0,4,0,0,0,0,4,0,0,0,0,0,0,0,6,0,6,0,0,0,0,1},
{1,0,0,0,0,0,4,0,4,0,0,0,0,0,0,0,6,0,6,0,0,0,0,1},
{1,0,0,4,0,0,4,0,4,0,0,0,0,0,0,0,6,0,0,0,0,0,0,1},
{1,0,0,4,0,0,0,0,4,0,0,0,0,0,0,0,6,0,0,0,0,0,0,1},
{1,0,0,4,4,4,4,4,4,0,0,0,0,0,0,0,6,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}

};

void map2D()
{
int i, j;
SDL_Rect block = {0, 0, mapS, mapS};
SDL_Rect space = {0, 0, mapS, mapS};

for (i = 0; i < mapW; i++)
{
for (j = 0; j < mapH; j++)
{
block.x = (j << 4) ;
block.y = (i << 4) ;
space.x = (j << 4) ;
space.y = (i << 4) ;

if (map[i][j] == 0)
{
SDL_SetRenderDrawColor(renderer, 255, 255, 255, 100);
SDL_RenderFillRect(renderer, &space);
}
else
{
SDL_SetRenderDrawColor(renderer, 0, 0, 0, 150);
SDL_RenderFillRect(renderer, &block);
}
}
}

return;
}
/**
void raycaster()
{
double posX = 22, posY = 12;
double dirX = -1, dirY = 0;
double planeX = 0, planeY = 0.66;

if (keyboardState.keyRight)
    {
      //both camera direction and camera plane must be rotated
      double oldDirX = dirX;
      dirX = dirX * cos(-turnSpeed) - dirY * sin(-turnSpeed);
      dirY = oldDirX * sin(-turnSpeed) + dirY * cos(-turnSpeed);
      double oldPlaneX = planeX;
      planeX = planeX * cos(-turnSpeed) - planeY * sin(-turnSpeed);
      planeY = oldPlaneX * sin(-turnSpeed) + planeY * cos(-turnSpeed);
    }
    //rotate to the left
    if (keyboardState.keyLeft)
    {
      //both camera direction and camera plane must be rotated
      double oldDirX = dirX;
      dirX = dirX * cos(turnSpeed) - dirY * sin(rotSpeed);
      dirY = oldDirX * sin(turnSpeed) + dirY * cos(rotSpeed);
      double oldPlaneX = planeX;
      planeX = planeX * cos(turnSpeed) - planeY * sin(rotSpeed);
      planeY = oldPlaneX * sin(turnSpeed) + planeY * cos(rotSpeed);
    }

}*/
