#include <stdio.h>
#include <stdlib.h>
int main()
{

#pragma region 동적 할당

	// 프로그램을 실행중에 필요한 만큼 메모리를 할당하는 작업.

	// int* ptr = (int *)malloc(sizeof(int));

	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경시킬 수 있으며, 
	// 동적으로 메모리를 크기를 할당할 때 바이트 단위로 반환.

	// printf("ptr이 가리키는 값은 : %d\n", *ptr);

	// *ptr = 100;

	// printf("ptr이 가리키는 값은 : %d\n", *ptr);

	// 메모리를 동적 할당할 때 주조를 범용 포인터로 반환하기 때문에
	//  자료형을 반환한 다음 메모리에 할당해야함.

	// free(ptr);
	// free(ptr); // 2번 사용시 오류발생.

	// 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로, 
	// 사용이 끝나면 직접 해제해주어야함.

#pragma endregion

#pragma region 댕글링 포인터

	// 이미 해제된 메모리 영역을 가리키는 포인터.

	// int* ptr1 = malloc(4);

	// *ptr1 = 100;

	// printf("ptr1이 가르키는 값은 : %d\n", *ptr1);

	// free(ptr1);

	// ptr1 = NULL;

	// *ptr1 = 999; // 해제된 메모리 공간에 접근하여 값을 저장.

	// printf("ptr1이 가르키는 값은 : %d\n", *ptr1);

#pragma endregion

#pragma region 동적 배열

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
