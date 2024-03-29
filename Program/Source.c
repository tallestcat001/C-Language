#include <stdio.h>
int itemcode;
int level = 1;
void stage() 
{
	level += 1;
}
void score()
{
	// 정적변수는 단 한번만 초기화가 이루어지는 변수.
	static int score = 0;

	score++;

	printf("score 변수의 값은 : %d\n", score);
}
int main()
{

#pragma region 지역변수

	// 함수 내부에서 선언된 변수로 { } 내에서만 접근할 수 있으며, 
	// { }를 벗어나게 되면 메모리에서 사라지는 특징을 가지고 있음.

	//	int data = 100;
	
	//	{
	//		int data = 200;
	
	//		printf("data 변수의 값은 : %d\n", data); // 변수의 범위 규칙 : 가장 가까운 위치에 있는 data 변수의 접근.
	//	}
	
	//	printf("data 변수의 값은 : %d\n", data);

#pragma endregion

#pragma region 전역변수

	// 함수 외부에 선언된 변수로 어디에서든지 접근이 가능하며, 
	// 프로그램이 실행될 때 생성되고 프로그램이 종료될 때 메모리에서 해제되는 특징을 가짐.

	// stage();

	// printf("level 변수의 값은 : %d\n", level);

	// printf("itemcode 변수의 값은 : %d\n", itemcode);

#pragma endregion

#pragma region 정적변수

	// static이라는 키워드를 사용하고 지역변수의 특징을 가지면서, 전역변수의 특징을 가지고 있는 변수.

	// score();
	// score();
	// score();

#pragma endregion

#pragma region 소인수분해

	//	int a;
	//	printf("정수를 입력해주세요 : ");
	//	scanf_s("%d", &a);
	//	
	//	for (int i = 2; i <= a; i++)
	//	{
	//		if (a % i == 0)
	//		{
	//			a /= i;
	//			printf("%d ", i);
	//			i--;
	//		}
	//	}

#pragma endregion

	return 0;
}	
