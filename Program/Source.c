#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "character.h"

#define width 11
#define height 11

char maze[width][height];

void init()
{
	strcpy(maze[0], "1111111111"); 
	strcpy(maze[1], "1001110001");
	strcpy(maze[2], "1101110111");
	strcpy(maze[3], "1100000111");
	strcpy(maze[4], "1101011111");
	strcpy(maze[5], "1001001111");
	strcpy(maze[6], "1101100001");
	strcpy(maze[7], "1100111101");
	strcpy(maze[8], "1110001111");
	strcpy(maze[9], "1000100021");
	strcpy(maze[10],"1111111111");
}
void randerer()
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (maze[i][j] == '1')
			{
				printf("¡á");
			}
			else if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '2')
			{
				printf("¡Ý");
			}
		}
		printf("\n");
	}
}

int main()
{
	Character character = { 4,1,"¡Ú" };

	init();
	while (1)
	{
		randerer();
		gotoXY(character.x, character.y);
		printf("%s", character.shape);
		system("cls");
	}

	return 0;
}
