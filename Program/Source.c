#include <stdio.h>
void main()
{

#pragma region 문자열

	// 연속적인 메모리 공간에 저장된 문자 변수의 집합.

	// const char* ptr = "Game";

	// *ptr = 'T'; // (역참조 X)

	// printf("ptr이 가리키는 값은 : %s\n", ptr); // %s : 문자열을 출력하는 서식 지정자.

	// ptr = "School";

	// printf("ptr이 가리키는 값은 : %s\n", ptr);

	// 문자열에 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며, 
	// 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에 문자열의 값을 저장할 수 없음.

	// char string[] = "Control";

	// printf("string의 크기는 : %d\n", sizeof(string));

	// 문자열은 공백도 함께 메모리 공간에 포함하여 크기를 결정하며,
	// 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됨.

	 // char name[] = "Ba\0rd"; // \0 : 배열 사이의 null문자를 추가함.
 
	 // name[0] = 'W';
 
	 // name = "Alistar"; // 새로운 값 (X)
 
	 // printf("name배열의 값은 : %s\n", name);

	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만, 
	// 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 문자열을 출력함.

#pragma endregion

#pragma region 약수구하기

	//	int a = 0;
	//	
	//	printf("정수값을 입력하세요 : ");
	//	scanf_s("%d", &a);
	//	
	//	printf("%d의 약수는 : ", a);
	//	
	//	for (int i = 1; i <= a; i++)
	//	{
	//		if (a % i == 0)
	//		{
	//			printf("%d ", i);
	//		}
	//	}
	//	printf("\n");

#pragma endregion

#pragma region 범용 포인터

	// 자료형이 정해지지않은 상태로 모든 자료형을 저장할 수 있는 포인터.

	// int data = 100;
	// float health = 99.75f;
	// void* vptr = &data;
 
	// *vptr = 1000; // 기본 역참조 (X)
 
	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없음.

	// *(int*)vptr = 1000;
 
	// printf("data의 값은 : %d\n", data);
 
	// vptr = &health;
 
	// *(float*)vptr = 100.0f;
 
	// printf("health의 값은 : %f\n", health);

	// vptr = "Visual Stdio";

	// printf("vptr의 값은 : %s\n", vptr);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는 변수의 자료형으로 잘료형 변환을 해주어야함.

#pragma endregion

}	
