#include <stdio.h>
void main()
{

#pragma region 오버플로우

	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서 연산을 수행하는 과정.

	// char data = 128;
	// printf("data 변수의 값은 : %d\n", data);

	// 최댓값보다 더 많은 값을 저장하게 되면 최솟값부터 최댓값을 넘어간 만큼 다시 계산.

#pragma endregion

#pragma region 언더플로우

	// 특정 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정.

	// char data = -129;
	// printf("data 변수의 값은 : %d\n", data);

	// 최솟값보다 더 작은 값을 저장하게 되면 최댓값부터 최솟값을 넘어간 만큼 다시 계산.

#pragma endregion

#pragma region 부호없는 자료형

	// unsigned int exp = 4294967295;
	// unsigned int count = -1;

	// printf("exp 변수의 값은 : %u\n", exp);
	// printf("count 변수의 값은 : %u\n", count);

	// 부호없는 자료형에서도 똑같이 오버플로우와 언더플로우가 발생함.

#pragma endregion

#pragma region 실수 형태의 10 진수를 2 진수로 변환하는 과정

	// 10 진수  실수 부분을 1.0이 될 때까지 계속 2로 곱한 다음 곱한 결과의 정수 부분을 위에서 아래로 순서대로 정렬.

	// float x = 13.625f;
	// printf("x 변수의 값은 : %f\n", x);

#pragma endregion

#pragma region 부동소수점

	// 소수점의 위치를 고정하기 않고, 소수점의 위치를 나타내는 방법.

	// float decimal = 10.3333333f;
	// printf("decimal 변수의 값은 : %.7f\n", decimal);

	// 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는 표현하지 않음.

#pragma endregion

}