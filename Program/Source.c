#include <stdio.h>
void main()
{

#pragma region �ּ� ������

	// ������ �ּҰ��� ��ȯ�ϴ� ������.

	// int data = 10;
	// 
	// printf("data�� �ּ� ���� : %p\n", &data); // %f : ������ �ּҰ��� ǥ��.

	// �������� �ּҰ��� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ� �ǹ��ϸ�, 
	// �޸��� ������ 1 byte�� ũ��� ������ ǥ����.

#pragma endregion

#pragma region sizeof() ������

	// ������ �޸� ũ�⸦ ��ȯ�ϴ� ������.

	// printf("int ������ ũ��� : %u byte\n", sizeof(int));
	// printf("float ������ ũ��� : %u byte\n", sizeof(float));

#pragma endregion

#pragma region ������

	// �޸��� �ּҰ��� ������ �� �ִ� ����.

	// int value = 100;
	// int* ptr = NULL;
	// ptr = &value; 

	// printf("ptr�� ���� : %p\n", ptr);
	// printf("ptr�� �޸� �ּҴ� : %p\n", &ptr);
	// printf("value�� �޸� �ּ� : %p\n", &value);

	// ������ ������ �ڽ��� �޸� ������ ������ ������, 
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������ ���� �ּҸ� ����Ű�Ե�.

	// int attack = 50;
	// int* iptr = &attack;
 
	// printf("attack�� ���� : %d\n", attack);
 
	// *iptr = 99;
 
	// printf("attack�� ���� : %d\n", attack);

	// ������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�, 
	// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ� �����Ͱ� ����Ű�� �޸��� �ڷ����� �������־�� ��.

	// float damage = 10.5;
	// int* ptr1 = &damage;
 
	// printf("ptr1 ������ ����Ű�� ���� : %f\n", *ptr1);

	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� ��.

	// float* fptr = NULL;
 
	// printf("fptr ������ ������ �޸� ũ��� : %d\n", sizeof(fptr));

	// ������ ������ ũ��� cpu�� �ѹ��� ó���� �� �ִ�  ũ��� ��������, �� ���� ó���Ҽ� �ִ� ũ��� �ü���� ���� ������.

	// float x = 0;
	// float y = 0;
	// float* fptr = 0;
 
	// printf("���� x�� ���� : %f\n", x);
	// printf("���� y�� ���� : %f\n", y);
 
	// fptr = &x;
	// *fptr = 66.75f;

	// printf("���� x�� ���� : %.2f\n", x);
 
	// fptr = &y;
	// *fptr = 99.825f;
 
	// printf("���� y�� ���� : %.3f\n", y);

#pragma endregion

#pragma region ��� ���� ������

	// ������ ������ ����� �����Ͽ�, ������ ������ ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ �� ������ �����ϴ°�.

	// int a = 10;
	// int b = 20;
	// const int* cptr = NULL;
 
	// cptr = &a;
	// printf("cptr�� ���� : %p\n", cptr);
 
	// cptr = &b;
	// printf("cptr�� ���� : %p\n", cptr);

	// ����� ������ �����ʹ� �ش� ������ ���� ������ �� ������, �ٸ� ������ �ּҴ� ����ų �� ����.

#pragma endregion

}	
