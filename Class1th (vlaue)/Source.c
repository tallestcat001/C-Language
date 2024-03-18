void main()
{
	//main 함수는 프로그램의 진입점 역활을 수행합니다.

#pragma region 변수
	// 데이터를 저장할수 있는 메모리 공간 생성하는 것.


#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것.

	char grade;


	// char -> 1 byte -128 ~ 127 사이의 값을 저장 할 수 있음.

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며, 
	// 자형의 크리는 바이트 단위로 이루어져 있고, 
	// 자료형의 경우 자료형에 따라 저장 할 수 있는 값의 종류와 범위가 정해져 있습니다.

#pragma endregion

#pragma region 대입연산자
	// 변수의 값을 저장할수 있는 연산자.

	int data = 100;



	// int -> 4 byte (정수형)
	// 대입 연산자의 기준으로 왼쪽에 있는 변수는 식별자를 가지고 있기 때문에,
	// 다른 값을 저장할 수 있음.

#pragma endregion

	// float pi = 3.141592f;
	// 
	// 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며, 
	// 원래 저장되어 있는 값은 새로 저정되는 값의 의해 지워짐.
	// 
	// pi = 14.6564f;

	//변수의 메모리 공간 프로그램이 실행될  때마다 바뀌며,
	// 여러 개의 변수가 있을때, 서로 고유의 메모리 공간을 가지고 있음.



#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 중복될 수 없지만, 대소문자로 구분가능.
	// ex)
	// int value = 10;
	// int VALUE = 20;

	// 2. 변수의 이름으로 공백이 포함될 수 없음.
	// ex)
	// int count down = 10; (X)

	// 3. 변수의 이름은 숫자로 시작할 수 없음.
	// ex)
	// char 1character = 'A'; (X)
	// char character1 = 'C'; (O)

	// 4. 변수의 이름으로 예약어를 사용할 수 없음.
	// ex)
	//int int = 50; (X)

	// 5. 변수의 이름으로 특수문자는 '$','_' 만 사용 가능.
	// ex)
	// int count_down = 5; (O)
	// int money$ = 100; (O)
	// int happy!= 50; (X)

#pragma endregion

}