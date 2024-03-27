#include <stdio.h>
void function()
{
	printf("function\n");
}

void damage(int attack)
{
	printf("%d의 데미지를 받았습니다.\n", attack);
}

float add(float x, float y)
{
	return x + y;
}

void recovery(float health)
{
	health = 100;
}

void swap(int* x, int* y)
{
	int z;
	
	z = *y;
	*y = *x;
	*x = z;
}

int main()
{

#pragma region 함수

	// 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합.

	// function();

	// 함수의 경우 자료형과 반환하는 값의 형태가 일치하지 않으면 원하는 값을 얻을 수 없음.

#pragma endregion

#pragma region 매개변수

	// 함수의 정의에서 전달받은 임수를 함수 내부로 전달하기 위해 사용하는 변수.

	// damage(25);

	// 매개변수는 함수 내부에서만 연산이 이루어지며, 함수가 종료되면 메모리에서 사라지는 특징을 가짐.

	// printf("add(10.5f, 20.75f)의 값은 : %f\n", add(10.5f, 20.75f));

	// 하나의 함수에 서로 다른 자료형의 매개변수를 함께 정의할 수 있으며, 여러 개의 매개변수 선언할 수 있음.

#pragma endregion

#pragma region 인수

	// 함수가 호출될 때 매개변수에 실제로 전달되는 값.

	// int health = 50;

	// recovery(health);

	// printf("health변수의 값은 : %d\n", health);

	// 함수를 호출할 때 변수의 값을 인수로 전달하게 되면 함수의 매개변수에 변수의 복사된 값이 전달되기 때문에 
	// 인수로 전달된 변수는 함수 내에서 일어난 연산에 대해 영향을 받지 않음.

	// int a = 10;
	// int b = 20;
 
	// printf("a 변수의 값은 : %d\n", a);
	// printf("b 변수의 값은 : %d\n", b);
	// printf("\n");

	// swap(&a,&b);

	// printf("a 변수의 값은 : %d\n", a);
	// printf("b 변수의 값은 : %d\n", b);

	// 함수를 호출할 때 변수의 주소를 인수로 전달하게 되면 전달한 변수의 주소가 참조되어 
	// 인수로 전달한 변수의 값이 함수 내에서 일어난 연산에 대해 영향을 받음.

#pragma endregion

	return 0;

}	
