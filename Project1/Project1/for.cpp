#include <stdio.h>
#include <Windows.h>

int main()
{
	int i = 0;

	/// <summary>
	///  i++ (후위 연산자) - 함수 실행 후에 더해주는것(+1)
	///  ++i (전위 연산자) - 함수가 실행하기 전에 더해주는것(+1)
	/// 
	///  i = 0; // 정의 해주다.(초기화)
	/// 
	///  i < 20 // i는 20보다 작다.
	/// 
	///  i++ (i를 1씩 더해준다.)
	/// 
	/// </summary>
	/// <returns></returns>

	// 초기화 ; 조건(if) ; 식

	// < (초과, 미만) , <= (이상, 이하)

	/*if(i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}

	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}

	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("숫자 : %d \n", i);
	}*/

	// 반복문

	 int test;
	 test = 10; 

	 int sum = 0;

	for ( int j = 0 ; j < 20; ++j)
	{
		sum = sum + 10; // (대입)
		//printf("숫자 : %d \n", sum);
	}

	//printf("숫자 : %d \n", sum);

	char a;

	//scanf_s("%c", &a);
	//printf("%c \n", a);

	// 반복문
	int money = 10000;

	while (money >= 0)
	{
		int paid = 0;
		char dummy, ch;
		printf("안녕하세요. 돈을 지불해 주세요 : ");
		
		scanf_s("%d", &paid);
		money -= paid;

		printf("남은 금액은 %d 입니다. \n", money);

		printf(" 더 구매하시겠습니까?(y는 계속구매 / n는 구매를 그만 둡니다.) :");

		scanf_s("%c", &dummy);
		scanf_s("%c",&ch);

		if (ch == 'y')
		{
			system("cls");	// 콘솔창 지워주는 함수
			continue;	// 건너뛰어 주는 키워드
		}
		else
			break;		// 함수를 종료 하는 키워드
	}
	
	return 0;
}