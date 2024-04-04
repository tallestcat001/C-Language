#include <stdio.h>
#include <stdarg.h>
#include <math.h>
void debug(int count, ...)
{

	// va_list : ���� ���� ����� �����ϴ� ����.

	va_list list = NULL;

	// va_start : ���� ���� ����� ����ϱ� ���� �ʱ�ȭ�ϴ� �Լ�.

	va_start(list, count);

	// va_arg : ���� ���� ��Ͽ��� ���� �������� Ư�� �ڷ����� ũ�⸸ŭ �̵��ϴ� �Լ�.

	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(list, int));
	}

	// va_end : ���� ���� ����� ��� �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ�.

	va_end(list);

}
struct point
{
	int x;
	int y;
};
double add(double x, double y)
{
	return x + y;
}
double substract(double x, double y)
{
	return x - y;
}
double multiply(double x, double y)
{
	return x * y;
}
double divide(double x, double y)
{
	return x / y;
}
void calculator(double (*ptr)(double, double), double u, double v)
{
	printf("%lf\n", ptr(u, v));
}
int main()
{

#pragma region ���� ���� ���

	// �Ű������� ������ �������� ���� �Ű������� ���� ��, ����ϴ� �μ�.

	// debug(3, 10, 20, 30);

	// printf("\n");

	// debug(5, 10, 20, 30, 40, 50);

#pragma endregion

#pragma region �� �������� �Ÿ�

	//	struct point p1;
	//	struct point m1;

	//	p1.x = 0;
	//	p1.y = 0;

	//	m1.x = 5;
	//	m1.y = 5;

	//	double a;

	//	a = sqrt(pow(m1.x - p1.x, 2) + pow(m1.y - p1.y, 2));

	//	if (a <= 5)
	//	{
	//		printf("������ Ž���Ǿ����ϴ�.\n");
	//	}
	//	else
	//	{
	//		printf("������ Ž������ �ʾҽ��ϴ�.\n");
	//	}

#pragma endregion

#pragma region �Լ� ������

	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� ����.

	// calculator(add, 10, 20);
	// calculator(substract, 10, 20);
	// calculator(multiply, 10, 20);
	// calculator(divide, 10, 20);

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű������� Ÿ���� ��ġ�ؾ���.

#pragma endregion

	return 0;
}
