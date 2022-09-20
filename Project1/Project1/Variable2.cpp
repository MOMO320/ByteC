#include <stdio.h>

/*
 ㅁ 실수형 변수
 : float, double 

 ㅁ printf의 또 다른 형식


*/


int main3()
{
	int a = 10;

	float b = 3.156766f; // float은 값 뒤에 'f'를 꼭 붙여야 한다.
	double c = 3.1544321; // double 과 float을 구분해 주기 위해 'f' 값을 붙인다.

	printf("b : %.2f \n ", b);
	printf("a : %5d \n", a);
	printf("c : %6.3f \n", c);

	return 0;
}