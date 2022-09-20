#include <stdio.h>
// 대입 연산자
// b += ;  -= , *= , /=


int main6()
{
	//int a = 3;
	//a = a + 3;

	int a = 1, b = 1, c = 1, d = 1;

	a = a + 1; // a = a+b;
	printf("a : %d \n", a);

	b += 1; 
	printf("b : %d \n", b);

	++c;	
	printf("c : %d \n", c);
	c++;	
	printf("c : %d \n", c);

	int x = 10;

	printf("++x : %d \n", ++x); // 전위형 ( 함수가 실행 되기전에 값을 +1 더해준다.)
	printf("x++ : %d \n", x++); // 후위형 ( 함수가 끝난 다음에 값에 +1 을 해준다.)
	printf("x : %d \n", x);
	return 0;
}