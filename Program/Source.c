#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int width = 100;
int height = 30;

typedef struct star
{
	int x, y;
	const char* shape;
};

void move(char* star)
{
	time(NULL);
	srand(time(NULL));

	int a = (rand((rand() % 10)));


};

HANDLE screen[2]; // ���� ������.
               // screen[0] : front buffer
               // screen[1] : back buffer

// HANDLE �ε����� �����ؼ� ���۸� �����ؼ� ��ü��Ű�� ����.
int screenIndex = 0;

void gotoXY(int x, int y)
{
	COORD position = { x , y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// ���۸� �ʱ�ȭ�ϴ� �Լ�
void initializescreen()
{
	CONSOLE_CURSOR_INFO cursor;

	// ������ ���� ������, ���� ������
	COORD size = { width,height };

	// left, top, right, bottom
	SMALL_RECT rect = { 0,0,width - 1,height - 1 };

	// front buffer�� ������.
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, // �б�, ����
		0,                            // �������
		NULL,                         // ���ȼӼ�
		CONSOLE_TEXTMODE_BUFFER,      // ���۸��
		NULL                          // ���ȼӼ�
	);

	// ������ ����� ������.
	SetConsoleScreenBufferSize(screen[0], size);

	// ������ ��ġ�� ������.
	SetConsoleWindowInfo(screen[0], TRUE, &rect); // TRUE : ������ ��ġ�� ������.

	// back buffer�� ������.
	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, // �б�, ����
		0,                            // �������
		NULL,                         // ���ȼӼ�
		CONSOLE_TEXTMODE_BUFFER,      // ���۸��
		NULL                          // ���ȼӼ�
	);

	// ������ ����� ������.
	SetConsoleScreenBufferSize(screen[1], size);

	// ������ ��ġ�� ������.
	SetConsoleWindowInfo(screen[1], TRUE, &rect); // TRUE : ������ ��ġ�� ������.

	// Ŀ���� Ȱ��ȭ ����.
	// false : Ŀ���� ����.
	// true : Ŀ���� ����.
	
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}

// ���۸� ��ü�ϴ� �Լ�.
void Flipscreen()
{
	// ���۸� �ϳ��� Ȱ��ȭ��ų �� �ִ� �Լ�.
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	// ���۸� ��ü.
	screenIndex = !screenIndex;
}

// ��ü�� ���۸� �����ִ� �Լ�.
void Clearscreen()
{
	COORD position = { 0,0 };

	DWORD written;

	FillConsoleOutputCharacter // ȭ�鿡 ���ڸ� �׷��ִ� �Լ�.
	(
		screen[screenIndex], // ȭ�� ����,
		' ',                 // ȭ�鿡 �׷��� ����.
		width * height,      // ȭ�鿡 �׷��� ������ ����.
		position,            // ȭ�鿡 �׷��� ������ ��ġ.
		&written             // ������ ����.
	);
}

// ���۸� �����ϴ� �Լ�.
void Releasescreen()
{
	CloseHandle(screen[0]); // ���۸� ������.
	CloseHandle(screen[1]);
}

// ���۸� ����ϴ� �Լ�.
void Drawscreen(int x, int y, const char* string)
{
	COORD position = { x,y };

	DWORD written;

	SetConsoleCursorPosition
	(
		screen[screenIndex],
		position
	); // ������ ��ġ�� ����.

	WriteFile
	(
		screen[screenIndex], // ����.
		string,              // ���ڿ�.
		strlen(string),      // ���ڿ��� ����.
		&written,            // ���ڿ��� ����.
		NULL                 // ���ȼӼ�.
	); // ������ ���ڿ��� �����.
}

int main()
{

	// 1. ���۸� �ʱ�ȭ��.
	initializescreen();

	while (1)
	{
		Drawscreen(5, 5, "��");

		// 2. ���۸� ��ü��.
		Flipscreen();

		// 3. ��ü�� ������ ������ ������.
		Clearscreen();
	}

	// 4. ���۸� ������.
	Releasescreen();

	return 0;
}
