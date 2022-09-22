#include <stdio.h>

int main35()
{
	int i = 1, sum = 0;

	// ㅁ do_while 과 while의 차이점
	// 
	// while은 조건식을 먼저 검사 후에 안의 내용을 실행 하지만,
	// do_while의 경우 do 안에있는 명령어들을 먼저 실행 후에 while의 조건문에 따라
	// 추가로 실행할지 안할지 판단 합니다.

	do // 무엇을 하다.(명령어가 들어감)	// 조건문 없어 -> 식을 실행함
	{
		sum += i;
		i++;

	} while (i < 10);	// (조건식도 있음) // 조건문을 확인하는거야

	while (i < 1)	// 위에 조건문을 거치고 식이 실행됨
	{
		sum += i;
		i++;
	}

	printf(" sum : %d \n", sum);
	return 0;
}