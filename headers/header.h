#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480


SDL_Window *window;
SDL_Renderer *renderer;

void createWindow();
void printError();
void renderScreen();
void destroyWindow();
void gameRun();
void game();

void player();

void events();



#endif /*HEADER_H */
