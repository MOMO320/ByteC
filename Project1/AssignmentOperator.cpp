#include <stdio.h>
// ���� ������
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

	printf("++x : %d \n", ++x); // ������ ( �Լ��� ���� �Ǳ����� ���� +1 �����ش�.)
	printf("x++ : %d \n", x++); // ������ ( �Լ��� ���� ������ ���� +1 �� ���ش�.)
	printf("x : %d \n", x);
	return 0;
}