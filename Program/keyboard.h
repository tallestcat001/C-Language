#pragma once
#include "character.h"
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define width 11
#define height 11

void input(char maze[width][height], Character* character)
{

	if (maze[character->x][character->y] == 2)
	{
		exit(1);
	}

	if (_kbhit())
	{
		char key = _getch();
		

		switch (key)
		{
		case 32 : 
			break;
		case UP: if (maze[character->y - 1][character->x / 2] != '1')character->y--;
			break;
		case LEFT: if (maze[character->y][character->x / 2 - 1] != '1')character->x -= 2;
			break;
		case RIGHT: if (maze[character->y][character->x / 2 + 1] != '1')character->x += 2;
			break;
		case DOWN: if (maze[character->y + 1][character->x / 2] != '1')character->y++;
			break;
		}
	}
}
