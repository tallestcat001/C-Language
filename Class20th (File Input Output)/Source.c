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

#pragma region ���� �����

	// ���� ������� ���ؼ��� ������ ���� �ݴ� ������ �ʿ���.
	// ������ ���� ���ؼ��� fopen �Լ��� �����.
	// fopen �Լ��� ������ ��ο� ������ ��带 ���ڷ� ����.
	// ������ ��δ� ������ ��θ� ���ڿ��� �Է��ϸ� ��.

	// r : �б� ���
	// w : ���� ���
	// a : �߰� ���
	// r+ : �б�/���� ���
	// w+ : �б�/���� ���	
	// a+ : �б�/���� ���

	// FILE *file = fopen("data.txt","w");

	// fputs("level : 5", file);
	// fputs("stage : 3", file);
	// fputs("hp : 100", file);

	// fclose(file);

	// fclose �Լ��� ������ �����͸� ���ڷ� ����.
	// ������ ������ ������ �����Ͱ� NULL�� �ʱ�ȭ��.
	// ������ ���� ������ ������ ��� �����ְ� �Ǿ� �����Ͱ� �սǵ� �� ����.

	// FILE* file = fopen("data.txt", "r");

	// char buffer[size] = { 0, };

	// fread(buffer, 1, size, file);

	// printf("%s", buffer);

	// fclose(file);

	// ������ ������ �о ����.

	// fread �Լ��� ������ ������, ���� �������� ũ��, ���� �������� ����, ������ �����͸� ���ڷ� ����.



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
