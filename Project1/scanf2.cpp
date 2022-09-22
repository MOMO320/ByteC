#include <stdio.h>

int main22()
{
	char ch;	//문자

	short sh;	// 정수
	int i;
	long lo;

	float fl;   // 실수
	double du;

	printf("char 형 변수 입력  : ");
	scanf_s("%c", &ch);

	printf("short 형 변수 입력 : ");
	scanf_s("%hd", &sh);

	printf("int 형 변수 입력 : ");
	scanf_s("%d", &i);

	printf("long 형 변수 입력 : ");
	scanf_s("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf_s("%f", &fl);

	printf("double 형 변수 입력 : ");
	scanf_s("%lf", &du);

	printf("char : %c, short : %d , int %d ", ch, sh, i);
	printf("long : %ld, float : %f , double : %f \n", lo, fl, du);

	return 0;
}