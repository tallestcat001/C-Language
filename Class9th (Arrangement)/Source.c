#include <stdio.h>
void main()
{

#pragma region Scanf() 함수

	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 마추어 입력해주는 함수.

	// int data = 0;
	// printf("data 변수의 값을 입력 : ");
	// scanf_s("%d", &data);

	// printf("data 변수의 값은 : %d\n", data);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관하였다가 입력되는 순간 버퍼 안의 내용을 프로그램에 전송함.

	//	int count = 5;

	//	while (count > 0)
	//	{
	//		printf("count 변수의 값 입력 : ");
	//		scanf_s("%d", &count);

	//		printf("count 변수의 값 : %d\n", count);
	//	}

	// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈 수 없으며, 
	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며, 
	// 서식 지정자의 따라 입력할 수 있는 데이터의 범위가 결정됨.

#pragma endregion

#pragma region	배열

	// 같은 자료형의 변수들로 이루어진 유한 집합.

	//	int array[5];

	//	for (int i = 0; i < 5; i++)
	//	{
	//		array[i] = (i+1) * 10;
	//		printf("array[%d]의 값은 : %d\n", i, array[i]);
	//	}

	// 배열의 경우 첫번째 원소는 0부터 시작함.

	// int size = 5; // 크기 고정 X.

	// int room[5]; // 크기 고정.

	// 배열은 원하는 원소에 값을 저장할 수 있으며, 
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을 가지게 됨.

	// char string[] = { 'A','B','C','D','E','F' };

	// printf("string 배열의 크기는 : %d\n", sizeof(string));

	// 배열의 크기는 생략할 수 있으며, 
	// 초기화 목록에서 설정한 요소에 다라 배열의 크기가 결정됨.

	// int list[5];

	// printf("list의 주소는 : %p\n", list);
	// printf("list[0]의 주소는 : %p\n", &list[0]);

	// int* ptr = NULL;

	// ptr = list;

	// *ptr = 10;

	// printf("list[0]의 값은 : %d\n", list[0]);

	// ptr = ptr + 1;

	// *ptr = 20;

	// printf("list[1]의 값은 : %d\n", list[1]);

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은 배열의 시작 주소를 가리킴.

#pragma endregion

}
