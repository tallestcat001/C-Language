#include <stdio.h>
void main()
{

#pragma region 주소 연산자

	// 변수의 주소값을 반환하는 연산자.

	// int data = 10;
	// 
	// printf("data의 주소 값은 : %p\n", &data); // %f : 변수의 주소값을 표현.

	// 데이터의 주소값은 해당 데이터가 저장된 메모리의 시작 주소를 의미하며, 
	// 메모리의 공강은 1 byte의 크기로 나누어 표현함.

#pragma endregion

#pragma region sizeof() 연산자

	// 변수의 메모리 크기를 반환하는 연산자.

	// printf("int 변수의 크기는 : %u byte\n", sizeof(int));
	// printf("float 변수의 크기는 : %u byte\n", sizeof(float));

#pragma endregion

#pragma region 포인터

	// 메모리의 주소값을 저장할 수 있는 변수.

	// int value = 100;
	// int* ptr = NULL;
	// ptr = &value; 

	// printf("ptr의 값은 : %p\n", ptr);
	// printf("ptr의 메모리 주소는 : %p\n", &ptr);
	// printf("value의 메모리 주소 : %p\n", &value);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리키게됨.

	// int attack = 50;
	// int* iptr = &attack;

	// printf("attack의 값은 : %d\n", attack);

	// *iptr = 99;

	// printf("attack의 값은 : %d\n", attack);

	// 변수의 주소는 프로그램이 실행될 때마다 변경되며, 
	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로 포인터가 가리키는 메모리의 자료형을 선언해주어야 함.

	// float damage = 10.5;
	// int* ptr1 = &damage;

	// printf("ptr1 변수가 가리키는 값은 : %f\n", *ptr1);

	// 포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과 포인터 병수의 자료형이 일치해야 함.

	// float* fptr = NULL;

	// printf("fptr 포인터 변수의 메모리 크기는 : %d\n", sizeof(fptr));

	// 포인터 변수의 크기는 cpu가 한번에 처리할 수 있는  크기로 정해지며, 한 번에 처리할수 있는 크기는 운영체제에 따라 정해짐.

	// float x = 0;
	// float y = 0;
	// float* fptr = 0;

	// printf("변수 x의 값은 : %f\n", x);
	// printf("변수 y의 값은 : %f\n", y);

	// fptr = &x;
	// *fptr = 66.75f;

	// printf("변수 x의 값은 : %.2f\n", x);

	// fptr = &y;
	// *fptr = 99.825f;

	// printf("변수 y의 값은 : %.3f\n", y);

#pragma endregion

#pragma region 상수 지시 포인터

	// 포인터 변수를 상수로 선언하여, 포인터 변수가 가리키고 있는 주소에 존재하는 값을 변경할 수 없도록 설정하는것.

	// int a = 10;
	// int b = 20;
	// const int* cptr = NULL;

	// cptr = &a;
	// printf("cptr의 값은 : %p\n", cptr);

	// cptr = &b;
	// printf("cptr의 값은 : %p\n", cptr);

	// 상수로 선언한 포인터는 해당 변수의 값을 변경할 수 없지만, 다른 변수의 주소는 가리킬 수 있음.

#pragma endregion

#pragma region 포인터 상수화

	// int v = 10;
	// int w = 20;
	// int* const reference = &v;

	// *reference = 100;

	// printf("v 변수의 값은 : %d\n", v);

	// reference = &w; // 이미 상수화된 포인터에는 새로운 주소를 넣을 수 없음.

	// 포인터 상수화는 새로운 메모리의 주소를 저장할 수 없음.

#pragma endregion

}
