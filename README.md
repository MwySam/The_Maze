__THE MAZE__

The Maze is a 3D Maze game that uses ray casting to render a 2D map into a 3D navigable world.
It is built using SDL and C while implementing core Raycasting techniques that translate the 2D maze into a 3D world.
It allows the player to explore the world in an exciting and engaging way.

__Installation__
To install the game, clone this repository to your machine:
git clone https://github.com/MwySam/The_Maze.git

__Compilation__
$ gcc -Wall -Werror -Wextra -pedantic ./src/*.c -lm -o maze `sdl2-config --cflags` `sdl2-config --libs`;

__Usage__
To run the game type _make_ to compile and run the program.

__Controls__
W - Moving forward
S - Moving backward
A - Look left
D - Look right
Mouse move left/right - look left or right
M - Turn off map visibility.
N - Turn on map visibility.

__Directories__
src
Contains all the source code files written in C.

headers
Contains all the header files.

