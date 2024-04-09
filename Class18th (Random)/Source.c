#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void viewhp(int health)
{
	for (int i = 0; i < health; i++)
	{
		printf("♥");
	}
}
int main()
{

#pragma region Rand() 함수

	// time(NULL) : UCT 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된 시간을 초(sec)로 반환하는 함수.

	// srand(time(NULL)); // 난수 발생기를 초기화하는 함수.

	// int result = (rand() % 10) + 1;  // 0 ~ 32767 사이의 난수를 생성하는 함수.

	// printf("result 변수의 값은 : %d\n", result);

	// for (int i = 0; i < 10; i++)
	// {
	// 	int result = (rand() % 10) + 1;
	// 	printf("%d ", result);
	// }

#pragma endregion

#pragma region Up - Down 게임

	//	srand(time(NULL));
	//	int a = 0;
	//	int result = rand() % 31;
	//	
	//	viewhp(10);
	//	printf("\n");
	//	
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		printf("값을 입력해주세요 : ");
	//		scanf_s("%d", &a);
	//		if (a < result)
	//		{
	//			printf("\n");
	//			viewhp(10 - i);
	//			printf("\n");
	//			printf("입력한 값이 작습니다.\n");
	//		}
	//		else if (a > result)
	//		{
	//			printf("\n");
	//			viewhp(10 - i);
	//			printf("\n");
	//			printf("입력한 값이 큽니다.\n");
	//		}
	//		else
	//		{
	//			printf("\n");
	//			printf("정답입니다.\n");
	//			break;
	//		}
	//	
	//		if (a != result && i == 10)
	//		{
	//			printf("\n");
	//			printf("HP가 전부 소모되었습니다.\n");
	//			printf("정답은 %d 입니다.\n", result);
	//			break;
	//		}
	//	}

#pragma endregion

	return 0;
}
