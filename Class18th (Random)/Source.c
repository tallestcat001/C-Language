#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void viewhp(int health)
{
	for (int i = 0; i < health; i++)
	{
		printf("��");
	}
}
int main()
{

#pragma region Rand() �Լ�

	// time(NULL) : UCT �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ����� �ð��� ��(sec)�� ��ȯ�ϴ� �Լ�.

	// srand(time(NULL)); // ���� �߻��⸦ �ʱ�ȭ�ϴ� �Լ�.

	// int result = (rand() % 10) + 1;  // 0 ~ 32767 ������ ������ �����ϴ� �Լ�.

	// printf("result ������ ���� : %d\n", result);

	// for (int i = 0; i < 10; i++)
	// {
	// 	int result = (rand() % 10) + 1;
	// 	printf("%d ", result);
	// }

#pragma endregion

#pragma region Up - Down ����

	//	srand(time(NULL));
	//	int a = 0;
	//	int result = rand() % 31;
	//	
	//	viewhp(10);
	//	printf("\n");
	//	
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		printf("���� �Է����ּ��� : ");
	//		scanf_s("%d", &a);
	//		if (a < result)
	//		{
	//			printf("\n");
	//			viewhp(10 - i);
	//			printf("\n");
	//			printf("�Է��� ���� �۽��ϴ�.\n");
	//		}
	//		else if (a > result)
	//		{
	//			printf("\n");
	//			viewhp(10 - i);
	//			printf("\n");
	//			printf("�Է��� ���� Ů�ϴ�.\n");
	//		}
	//		else
	//		{
	//			printf("\n");
	//			printf("�����Դϴ�.\n");
	//			break;
	//		}
	//	
	//		if (a != result && i == 10)
	//		{
	//			printf("\n");
	//			printf("HP�� ���� �Ҹ�Ǿ����ϴ�.\n");
	//			printf("������ %d �Դϴ�.\n", result);
	//			break;
	//		}
	//	}

#pragma endregion

	return 0;
}
