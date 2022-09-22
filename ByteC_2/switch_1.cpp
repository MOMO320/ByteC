#include <stdio.h>

enum MyPet	 // enum문 - 나중에 나옴 & switch
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

	printf("마이펫 \n");
	printf("무엇을 하실 건지 입력하래 \n");
	printf(" 1. 밥주기 \n");
	printf(" 2. 씻기기 \n");
	printf(" 3. 재우기 \n");

	scanf_s("%d", &input);

	switch (input)	// switch 한국어로 전환이다.
	{
	case EAT:
		printf("아이 맛있어! \n");
		break;

	case WASH:	// 무엇을 행동할지 enum을 통해 정의 하고 받아 줄 수있다.
		printf("아이 시원해! \n");
		break;

	case SLEEP:
		printf("zzzz\n");
		break;
		
	default:
		break;
	}


	//if (input == 1)
	//{
	//	printf("아이 맛있어! \n");
	//}
	//else if (input == 2)
	//{
	//	printf("아이 시원해! \n");
	//}
	//else if (input == 3)
	//{
	//	printf("zzzz\n");
	//}
	//else
	//	printf("무슨 명령어 인지 모르겠습니다. 왈왈 \n");

	return 0;
}
