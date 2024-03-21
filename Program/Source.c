#include <stdio.h>
#define SIZE 5
void main()
{

#pragma region 자료형 변환

	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때 기존에 지정했던 자료형을 다른 자료형으로 변환하는 과정.

#pragma region 암묵적 형변환

	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형으로 변환되는 과정.

	// int data = 10;
	// float storage = 7.5f;
 
	// printf("data + storage를 연산한 값은 : %f\n", data + storage);

	// data = storage; // 정수부분만 저장.

	// printf("data의 값은 : %d\n", data);

	// 표현범위가 작은 데이터에 표현범위가 큰 데이터를 저장하게 되면 암묵적으로 데이터 손실이 일어남.

#pragma endregion

#pragma region 명시적 형변환

	// 연산이 이루어지기 전에 사용자가 직접 자료형을 변환하는 과정.
	
	// int health = 10;
	// int armor = 3;
 
	// float result = (float)health / armor; // int형의 나눗셈은 정수만 표현.

	// printf("result 변수의 값은 : %f\n",result);
	
	// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과값만 가질 수 있음.

#pragma endregion

#pragma endregion

#pragma region 메크로

	// 프로그램내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정.

	// printf("SIZE 메크로의 값은 : %d\n", SIZE);

	// 메크로의 경우 자료형이 존재하지 않으므로 메모리 공간을 가지고 있지 않음.

	// 메크로의 과정은 컴파일 이전에 실행되며, 
	// 각 메크로가 실행될 때 메크로의 대체 목록을 넣어야 하므로 프로그램의 크기가 커지게 됨.

#pragma endregion

#pragma region 단축 평가 계산

	// 첫 번째 인수의 값을 결정하기에 충분하지 않으면 두 번째 인수를 계산하는 부분을 수행하지 않는 계산.

	//	int x = 1;
	//	int y = 2;
	
	//	if (x == 0 && y++)
	//	{
	//		printf("AND의 연산이 '참'입니다.\n");
	//	}
	
	//	printf("y의 값은 : %d\n", y);

#pragma endregion

#pragma region (1)부터 (10)까지의 합

	//	int j = 0;
	//	
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		j += i;
	//	}
	//	printf("1부터 10까지의 합은 : %d\n", j);

#pragma endregion

#pragma region star 

	//	for (int i = 1; i <= 5; i++)
	//	{
	//		for (int j = 0; j<i; j++)
	//		{			
	//			printf("*");
	//		}
	//		printf("\n");
	//	}

#pragma endregion

}	
