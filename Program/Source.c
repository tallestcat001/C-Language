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

	printf("count ������ ���� : %d\n", count);

}
inline void process(int data)
{
	printf("%d%%��ŭ �����Ͱ� ó���Ǿ����ϴ�.\n", data);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, �����Ͻ� �¶��� �Լ��� �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ��� ��ȯ�Ǳ⵵ ��.

}
int main()
{

#pragma region ����Լ�

	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ�.

	// awake();

	// ����Լ��� �Լ��� ��� ȣ���ϱ� ������ ���ÿ����� �޸𸮰� ��� ���̰� �ǹǷ�, ���� �����÷ο찡 �߻���.

	// recursive(3);

	// ����Լ��� ��� Ư���� �������� �Լ��� ��ȯ�ؾ� �ϸ�, 
	// ��������� ȣ���� �Լ��� ���� �����ӿ� ���� �������� ȣ��� �Լ����� ���ʴ�� ���� �������� ������.

#pragma endregion

#pragma region �ִ񰪰� �ּҰ�

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
	//	printf("�ִ��� : %d\n", max);
	//	printf("�ּҰ��� : %d\n", min);
	
#pragma endregion

#pragma region �ζ��� �Լ�

	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ�.

	// process(75);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó���ӵ��� ��������,
	// �ζ��� �Լ��� ���� ����ϰ� �ϰ� �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������ ���������� ũ�Ⱑ Ŀ���Ե�.

#pragma endregion

#pragma region �Ҽ�

	int a = 0;
	int b = 0;

	printf("������ �Է��ϼ��� : ");
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
		printf("%d�� ���� �Ҽ��Դϴ�.\n", a);
	}
	else
	{
		printf("%d�� ���� �Ҽ��� �ƴմϴ�.\n", a);
	}

#pragma endregion

	return 0;
}	
