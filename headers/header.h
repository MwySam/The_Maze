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
#define mapX 24
#define mapY 24
#define mapS 64

SDL_Window *window;
SDL_Renderer *renderer;

void createWindow();
void printError();
void renderScreen();
void destroyWindow();
void gameRun();

void player();

void events();

void drawMap2D();
bool detectCollision();
#endif /*HEADER_H */
