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
	// ������ �߰��� ���� �����ϰ� �Ǹ� �� ������ ���� ������ ���� ������ ���� ���·� ������. 

	IDLE,
	ATTACK,
	DIE

	// �������� 0���� �����ϸ�, 1�� ������.
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

#pragma region ������

	//	int a;
	//	scanf_s("%d", &a);
	//	enum STATUS status = a;

	//	printf("status�� ���� : %d\n", status);

	//	switch (status)
	//	{
	//		case IDLE: printf("��� ����\n");
	//			break;
	//		case ATTACK: printf("���� ����\n");
	//			break;
	//		case DIE: printf("��� ����\n");
	//			break;
	//	}

#pragma endregion

#pragma region ���丮��

	//	int result = 1;
	//	int n;
	//	printf("���� �Է��ϼ��� : ");
	//	scanf_s("%d", &n);

	//	for (int i = n; i >= 1; i--)
	//	{
	//		result *= i;
	//	}

	//	printf("%d! = %d", n,result);

#pragma endregion

#pragma region ���� ������

	// int data = 10;
	// int *ptr = &data;
	// int **dptr = &ptr;

	// printf("data�� ���� : %d\n", data);

	// *ptr = 20;

	// printf("data�� ���� : %d\n", data);

	// **dptr = 30;

	// printf("data�� ���� : %d\n", data);

#pragma endregion

#pragma region ������ �迭

	// �迭�� ��ҷ� �Ǵٸ� �迭�� ������ �迭.

	//	int array2D[3][3] =
	//	{
	//		{1,2,3},
	//		{4,5,6},
	//		{7,8,9}
	//	};

	//	printf("array2D[1][0]�� ���� : %d\n", array2D[1][0]);

	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("%d ", array2D[i][j]);
	//		}
	//		printf("\n");
	//	}

	// 2���� �迭�� ��� ���� ���еǸ�, �տ� �ִ� �迭�� ���� �ǹ��ϰ� �ڿ� �ִ¹迭�� ���� �ǹ���.

#pragma endregion

	return 0;
}
