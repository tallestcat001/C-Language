#include <stdio.h>
#include <stdarg.h>
#include <math.h>
void debug(int count, ...)
{

	// va_list : 가변 길이 목록을 저장하는 변수.

	va_list list = NULL;

	// va_start : 가변 길이 목록을 사용하기 위해 초기화하는 함수.

	va_start(list, count);

	// va_arg : 가변 길이 목록에서 값을 가져오고 특정 자료형의 크기만큼 이동하는 함수.

	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(list, int));
	}

	// va_end : 가변 길이 목록을 사용 후 포인터를 NULL로 초기화하는 함수.

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

#pragma region 가변 길이 목록

	// 매개변수에 갯수가 정해지지 않은 매개변수를 받을 때, 사용하는 인수.

	// debug(3, 10, 20, 30);

	// printf("\n");

	// debug(5, 10, 20, 30, 40, 50);

#pragma endregion

#pragma region 두 점사이의 거리

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
	//		printf("적에게 탐지되었습니다.\n");
	//	}
	//	else
	//	{
	//		printf("적에게 탐지되지 않았습니다.\n");
	//	}

#pragma endregion

#pragma region 함수 포인터

	// 함수의 주소값을 저장하고 가리킬 수 있는 변수.

	// calculator(add, 10, 20);
	// calculator(substract, 10, 20);
	// calculator(multiply, 10, 20);
	// calculator(divide, 10, 20);

	// 함수 포인터는 함수의 반환형과 매개변수의 타입이 일치해야함.

#pragma endregion

	return 0;
}
