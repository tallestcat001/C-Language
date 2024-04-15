#include <Windows.h>

typedef struct Character
{
	int x, y;
	const char* shape;
}Character;


void gotoXY(int x, int y)
{
	COORD postion = { x , y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), postion);

}

