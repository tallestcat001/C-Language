#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void gotoXY(int x, int y)
{
	// X��� Y�� ��ǥ ����.

	 COORD postion = { x , y };

	// Ŀ���̵��Լ�.

	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), postion);

	// GetStdHandle(STD_OUTPUT_HANDLE) :ǥ�� ��� �ڵ��� ������.
	// SetConsoleCursorPosition : �ܼ�â�� Ŀ���� �̵���.
}
int main()
{

	//	char key = 0;

	//	int x = 0;
	//	int y = 0;

	//	while (1)
	//	{
	//		if (_kbhit()) // Ű������ �Է��� �ִ��� Ȯ����.
	//		{
	//			key = _getch();// Ű������ �Է��� ����.
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
	//			printf("��");
	//		}
	//	}

	return 0;
}
