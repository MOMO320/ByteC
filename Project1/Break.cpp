#include <stdio.h>

int main30()
{
	int usranswer;

	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");

	// 반복문 for(  초기화  ; 조건문  ; 식  )
	for (;;)
	{
		scanf_s("%d", &usranswer);

		if (usranswer == 3) // 만약에 조건식이 맞다면
		{
			printf("맞추셨군요! \n");
			break;	// 오로지 반복문에서만 사용 할 수 있다.(끝내 달란 뜻)
			// break문을 만나면 반복문에서 나간다.
		}
		else if (usranswer == 5)
		{
			printf("중간은 가셨네요! \n");
			break;
		}
		else  // 만약에 조건식이 틀리다면
		{
			// 조건문에 들어가지 않는다면 여기로
			printf("틀렸어요! \n");
		}
	}

	return 0;
}