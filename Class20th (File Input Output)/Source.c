#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define size 1000
void load(const char* name)
{
	// FILE* file = fopen(name, "r");
	// 
	// char buffer[size] = { 0, };
	// 
	// fread(buffer, 1, size, file);
	// 
	// printf("%s", buffer);
	// 
	// fclose(file);
};
int main()
{

#pragma region 파일 입출력

	// 파일 입출력을 위해서는 파일을 열고 닫는 과정이 필요함.
	// 파일을 열기 위해서는 fopen 함수를 사용함.
	// fopen 함수는 파일의 경로와 파일의 모드를 인자로 받음.
	// 파일의 경로는 파일의 경로를 문자열로 입력하면 됨.

	// r : 읽기 모드
	// w : 쓰기 모드
	// a : 추가 모드
	// r+ : 읽기/쓰기 모드
	// w+ : 읽기/쓰기 모드	
	// a+ : 읽기/쓰기 모드

	// FILE *file = fopen("data.txt","w");

	// fputs("level : 5", file);
	// fputs("stage : 3", file);
	// fputs("hp : 100", file);

	// fclose(file);

	// fclose 함수는 파일의 포인터를 인자로 받음.
	// 파일을 닫으면 파일의 포인터가 NULL로 초기화됨.
	// 파일을 닫지 않으면 파일이 계속 열려있게 되어 데이터가 손실될 수 있음.

	// FILE* file = fopen("data.txt", "r");

	// char buffer[size] = { 0, };

	// fread(buffer, 1, size, file);

	// printf("%s", buffer);

	// fclose(file);

	// 파일의 내용을 읽어서 저장.

	// fread 함수는 파일의 포인터, 읽을 데이터의 크기, 읽을 데이터의 개수, 파일의 포인터를 인자로 받음.



#pragma endregion

#pragma region ASCII Generator

	// load("dragon.txt");

	//	while (1)
	//	{
	//		load("Resources/data.txt");
	
	//		system("cls");
	//	}

#pragma endregion

	return 0;
}
