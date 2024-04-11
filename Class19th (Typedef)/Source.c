#include <stdio.h>
typedef struct Vector2
{
	int x;
	int y;
}Vector2;
typedef struct
{
	int x;
	int y;
	int z;
}Vector3;
enum STATUS
{
	// 열거형 중간에 값을 변경하게 되면 그 다음의 값도 이전의 값에 영향을 받은 상태로 증가함. 

	IDLE,
	ATTACK,
	DIE

	// 열거형은 0부터 시작하며, 1씩 증가함.
};
int main()
{

#pragma region typedef

	// Vector2 vector2;

	// vector2.x = 10;
	// vector2.y = 20;

	// printf("vector2 x : %d\n", vector2.x);
	// printf("vector2 y : %d\n", vector2.y);
	// printf("\n");

	// Vector3 vector3 = { 5,10,15 };

	// printf("vector3 x : %d\n", vector3.x);
	// printf("vector3 y : %d\n", vector3.y);
	// printf("vector3 z : %d\n", vector3.z);

#pragma endregion

#pragma region 열거형

	//	int a;
	//	scanf_s("%d", &a);
	//	enum STATUS status = a;

	//	printf("status의 값은 : %d\n", status);

	//	switch (status)
	//	{
	//		case IDLE: printf("대기 상태\n");
	//			break;
	//		case ATTACK: printf("공격 상태\n");
	//			break;
	//		case DIE: printf("사망 상태\n");
	//			break;
	//	}

#pragma endregion

#pragma region 팩토리얼

	//	int result = 1;
	//	int n;
	//	printf("값을 입력하세요 : ");
	//	scanf_s("%d", &n);

	//	for (int i = n; i >= 1; i--)
	//	{
	//		result *= i;
	//	}

	//	printf("%d! = %d", n,result);

#pragma endregion

#pragma region 이중 포인터

	// int data = 10;
	// int *ptr = &data;
	// int **dptr = &ptr;

	// printf("data의 값은 : %d\n", data);

	// *ptr = 20;

	// printf("data의 값은 : %d\n", data);

	// **dptr = 30;

	// printf("data의 값은 : %d\n", data);

#pragma endregion

#pragma region 이차원 배열

	// 배열의 요소로 또다른 배열을 가지는 배열.

	//	int array2D[3][3] =
	//	{
	//		{1,2,3},
	//		{4,5,6},
	//		{7,8,9}
	//	};

	//	printf("array2D[1][0]의 값은 : %d\n", array2D[1][0]);

	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("%d ", array2D[i][j]);
	//		}
	//		printf("\n");
	//	}

	// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은 행을 의미하고 뒤에 있는배열은 열을 의미함.

#pragma endregion

	return 0;
}
