#include <stdio.h>
int itemcode;
int level = 1;
void stage() 
{
	level += 1;
}
void score()
{
	// ���������� �� �ѹ��� �ʱ�ȭ�� �̷������ ����.
	static int score = 0;

	score++;

	printf("score ������ ���� : %d\n", score);
}
int main()
{

#pragma region ��������

	// �Լ� ���ο��� ����� ������ { } �������� ������ �� ������, 
	// { }�� ����� �Ǹ� �޸𸮿��� ������� Ư¡�� ������ ����.

	//	int data = 100;
	
	//	{
	//		int data = 200;
	
	//		printf("data ������ ���� : %d\n", data); // ������ ���� ��Ģ : ���� ����� ��ġ�� �ִ� data ������ ����.
	//	}
	
	//	printf("data ������ ���� : %d\n", data);

#pragma endregion

#pragma region ��������

	// �Լ� �ܺο� ����� ������ ��𿡼����� ������ �����ϸ�, 
	// ���α׷��� ����� �� �����ǰ� ���α׷��� ����� �� �޸𸮿��� �����Ǵ� Ư¡�� ����.

	// stage();

	// printf("level ������ ���� : %d\n", level);

	// printf("itemcode ������ ���� : %d\n", itemcode);

#pragma endregion

#pragma region ��������

	// static�̶�� Ű���带 ����ϰ� ���������� Ư¡�� �����鼭, ���������� Ư¡�� ������ �ִ� ����.

	// score();
	// score();
	// score();

#pragma endregion

#pragma region ���μ�����

	//	int a;
	//	printf("������ �Է����ּ��� : ");
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
