#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void gotoXY(int x, int y)
{
	// X축과 Y축 좌표 설정.

	 COORD postion = { x , y };

	// 커서이동함수.

	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), postion);

	// GetStdHandle(STD_OUTPUT_HANDLE) :표준 출력 핸들을 가져옴.
	// SetConsoleCursorPosition : 콘솔창의 커서를 이동함.
}
int main()
{

	//	char key = 0;

	//	int x = 0;
	//	int y = 0;

	//	while (1)
	//	{
	//		if (_kbhit()) // 키보드의 입력이 있는지 확인함.
	//		{
	//			key = _getch();// 키보드의 입력을 받음.
	//	
	//			system("cls");
	//	
	//			if (key == -32)
	//			{
	//				key = _getch();
	//			}
	//		
	//			switch (key)
	//			{
	//			case UP:if (y > 0) { y--; }
	//				break;
	//				
	//			case LEFT: if (x > 0) { x -= 2; }
	//				break;
	//				
	//			case RIGHT: if (x < 98) { x += 2; }
	//				break;
	//				
	//			case DOWN: if (y < 29) { y++; }
	//				break;
	//			}
	//			gotoXY(x, y);
	//			printf("★");
	//		}
	//	}

	return 0;
}
