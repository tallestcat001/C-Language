#include <stdio.h>
struct node
{
	int data;
	struct node* next;
};
int main()
{

#pragma region ASCII �ڵ�

	// �̱� ���� ��ȯ ǥ�غ�ȣ(ASCII)�� 7��Ʈ�� ���ڸ� ǥ���ϴ� ǥ���ڵ�.

	// printf("%d\n", 'A');

	//	for (int i = 0; i < 26; i++)
	//	{
	//		printf("%c ", 'A' + i);
	//	}

#pragma endregion

#pragma region �ڱ� ���� ����ü

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
