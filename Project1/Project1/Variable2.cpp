#include <stdio.h>

/*
 �� �Ǽ��� ����
 : float, double 

 �� printf�� �� �ٸ� ����


*/


int main3()
{
	int a = 10;

	float b = 3.156766f; // float�� �� �ڿ� 'f'�� �� �ٿ��� �Ѵ�.
	double c = 3.1544321; // double �� float�� ������ �ֱ� ���� 'f' ���� ���δ�.

	printf("b : %.2f \n ", b);
	printf("a : %5d \n", a);
	printf("c : %6.3f \n", c);

	return 0;
}