#include <stdio.h>
struct node
{
	int data;
	struct node* next;
};
int main()
{

#pragma region ASCII 코드

	// 미국 정보 교환 표준부호(ASCII)는 7비트로 문자를 표현하는 표준코드.

	// printf("%d\n", 'A');

	//	for (int i = 0; i < 26; i++)
	//	{
	//		printf("%c ", 'A' + i);
	//	}

#pragma endregion

#pragma region 자기 참조 구조체

	//	struct node node1;
	//	struct node node2;
	//	struct node node3;

	//	node1.data = 10;
	//	node1.next = &node2;

	//	node2.data = 20;
	//	node2.next = &node3;

	//	node3.data = 30;
	//	node3.next = NULL;

	//	struct node* crrentptr = &node1;

	//	while (crrentptr != NULL)
	//	{
	//		printf("%d\n", crrentptr->data);
	//		crrentptr = crrentptr->next;
	//	}

#pragma endregion

	return 0;
}
