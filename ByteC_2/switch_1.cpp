#include <stdio.h>

enum MyPet	 // enum�� - ���߿� ���� & switch
{
	EAT = 1,
	WASH,
	SLEEP,
};

//enum Action
//{
//	RUN,
//	WALK,
//	SIT,
//	EAT
//};

int main0()
{
	int input;

	printf("������ \n");
	printf("������ �Ͻ� ���� �Է��Ϸ� \n");
	printf(" 1. ���ֱ� \n");
	printf(" 2. �ı�� \n");
	printf(" 3. ���� \n");

	scanf_s("%d", &input);

	switch (input)	// switch �ѱ���� ��ȯ�̴�.
	{
	case EAT:
		printf("���� ���־�! \n");
		break;

	case WASH:	// ������ �ൿ���� enum�� ���� ���� �ϰ� �޾� �� ���ִ�.
		printf("���� �ÿ���! \n");
		break;

	case SLEEP:
		printf("zzzz\n");
		break;
		
	default:
		break;
	}


	//if (input == 1)
	//{
	//	printf("���� ���־�! \n");
	//}
	//else if (input == 2)
	//{
	//	printf("���� �ÿ���! \n");
	//}
	//else if (input == 3)
	//{
	//	printf("zzzz\n");
	//}
	//else
	//	printf("���� ��ɾ� ���� �𸣰ڽ��ϴ�. �п� \n");

	return 0;
}
