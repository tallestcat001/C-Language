#include <stdio.h>
#include <string.h>
struct Goblin
{
	char grade;
	int health;
	const char* name;
};
struct GameObject
{
	short z; 
	int x;
	double y;

	// ����ü ũ���� ��� �ɹ� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ��� ������ �� ������, 
	// ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� ������.
};
int main()
{

#pragma region ����ü

	// �������� ������ �ϳ��� �������� ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ��.

	// struct Goblin goblin1;

	// goblin1.grade = 'A';
	// goblin1.health = 100;
	// goblin1.name = "������ ���";
 
	// printf("goblin1�� �ּҰ��� : %p\n", &goblin1);
 
	// printf("goblin.grade�� ���� : %c\n", goblin1.grade);
	// printf("goblin.health�� ���� : %d\n", goblin1.health);
	// printf("goblin.name�� ���� : %s\n", goblin1.name);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�,
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� ����.

	// struct Goblin goblin2 = {'S',200,"��ȭ�� ���"};
 
	// printf("goblin2.grade�� ���� : %c\n", goblin2.grade);
	// printf("goblin2.health�� ���� : %d\n", goblin2.health);
	// printf("goblin2.name�� ���� : %s\n", goblin2.name);

	// ����ü�� �����͸� �ʱ�ȭ�� �� �ʱ�ȭ ����Ʈ�� ����Ͽ� �ʱ�ȭ �� �� ������, 
	// ���ʿ������� ���������� ������� �ʱ�ȭ��.

#pragma endregion

#pragma region ����Ʈ �е�

	// �ɹ� ������ �޸𸮿��� CPU�� ���� �� �ѹ��� ���� �� �ֵ���, 
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾�.

	// struct GameObject gameObject;
	
	// printf("GameObject�� ũ��� : %d\n", sizeof(gameObject));

	// ����ü�� ũ��� ����ü�� �����ϴ� �ɹ� �߿��� ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� ������.

#pragma endregion

#pragma region ȸ��

	int a = 0;

	const char* name = "level";

	int size = strlen(name);

	for (int i = 0; i < size / 2; i++)
	{
		if (name[i] != name[size - 1 - i])
		{
			a = 1;
		}
		else
		{
			a = 0;
		}
	}

	if (a == 1)
	{
		printf("ȸ���� �ƴմϴ�.\n");
	}
	else
	{
		printf("ȸ���Դϴ�.\n");
	}

#pragma endregion

	return 0;
}	
