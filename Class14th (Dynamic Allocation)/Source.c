#include <stdio.h>
#include <stdlib.h>
int main()
{

#pragma region ���� �Ҵ�

	// ���α׷��� �����߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾�.

	// int* ptr = (int *)malloc(sizeof(int));

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������, 
	// �������� �޸𸮸� ũ�⸦ �Ҵ��� �� ����Ʈ ������ ��ȯ.

	// printf("ptr�� ����Ű�� ���� : %d\n", *ptr);

	// *ptr = 100;

	// printf("ptr�� ����Ű�� ���� : %d\n", *ptr);

	// �޸𸮸� ���� �Ҵ��� �� ������ ���� �����ͷ� ��ȯ�ϱ� ������
	//  �ڷ����� ��ȯ�� ���� �޸𸮿� �Ҵ��ؾ���.

	// free(ptr);
	// free(ptr); // 2�� ���� �����߻�.

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�, 
	// ����� ������ ���� �������־����.

#pragma endregion

#pragma region ��۸� ������

	// �̹� ������ �޸� ������ ����Ű�� ������.

	// int* ptr1 = malloc(4);

	// *ptr1 = 100;

	// printf("ptr1�� ����Ű�� ���� : %d\n", *ptr1);

	// free(ptr1);

	// ptr1 = NULL;

	// *ptr1 = 999; // ������ �޸� ������ �����Ͽ� ���� ����.

	// printf("ptr1�� ����Ű�� ���� : %d\n", *ptr1);

#pragma endregion

#pragma region ���� �迭

	// int dynamicarraysize = 5;

	// int* arrptr = (int*)malloc(sizeof(int) * dynamicarraysize);

	// int size = (sizeof(int) * dynamicarraysize) / sizeof(int);

	// for (int i = 0; i < size; i++)
	// {
	// 	arrptr[i] = i + 1;
	// 	printf("arrptr[%d] : %d\n", i, arrptr[i]);
	// } 
	// free(arrptr);

	// dynamicarraysize = 10;

	// arrptr = (int*)malloc(sizeof(int) * dynamicarraysize);

	// size = (sizeof(int) * dynamicarraysize) / sizeof(int);

	// printf("\n");

	// for (int i = 0; i < size; i++)
	// {
	// 	arrptr[i] = i + 1;
	// 	printf("arrptr[%d] : %d\n", i, arrptr[i]);
	// }

	// free(arrptr);

#pragma endregion

	return 0;
}
