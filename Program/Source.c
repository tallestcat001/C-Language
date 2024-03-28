#include <stdio.h>
void awake()
{
	printf("awake\n");

	awake();
}
void recursive(int count)
{
	if (count <= 0)
	{
		return;
	}

	recursive(count - 1);

	printf("count 변수의 값은 : %d\n", count);

}
inline void process(int data)
{
	printf("%d%%만큼 데이터가 처리되었습니다.\n", data);

	// 인라인 함수는 컴파일 시점에 확장되며, 컴파일시 온라인 함수로 선언하더라도 상황에 따라 일반 함수로 변환되기도 함.

}
int main()
{

#pragma region 재귀함수

	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수.

	// awake();

	// 재귀함수는 함수를 계속 호출하기 때문에 스택영역에 메모리가 계속 쌓이게 되므로, 스택 오버플로우가 발생함.

	// recursive(3);

	// 재귀함수의 경우 특정한 시점에서 함수를 반환해야 하며, 
	// 재귀적으로 호출한 함수는 스택 프레임에 의해 마지막에 호출된 함수부터 차례대로 스택 영역에서 해제됨.

#pragma endregion

#pragma region 최댓값과 최소값

	//	int array[5] = { 6,11,1,2,8 };
	//	int max = array[0];
	//	int min = array[0];
	//	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		if (max < array[i])
	//		{
	//			max = array[i];
	//		}
	//		if (min > array[i])
	//		{
	//			min = array[i];
	//		}
	//	}
	//	
	//	printf("최댓값은 : %d\n", max);
	//	printf("최소값은 : %d\n", min);
	
#pragma endregion

#pragma region 인라인 함수

	// 함수를 호출하는 대신 함수가 호출되는 위치마다 함수의 코드를 복사하여 전달하는 방식의 함수.

	// process(75);

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리속도가 빠르지만,
	// 인라인 함수를 많이 사용하게 하게 되면 함수의 코드가 복사되기 때문에 실행파일의 크기가 커지게됨.

#pragma endregion

#pragma region 소수

	int a = 0;
	int b = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);

	for (int i = 2; i <= a; i++)
	{
		if (a % i == 0)
		{
			b++;
		}
	}

	if (b == 1)
	{
		printf("%d의 값은 소수입니다.\n", a);
	}
	else
	{
		printf("%d의 값은 소수가 아닙니다.\n", a);
	}

#pragma endregion

	return 0;
}	
