// ������, �ٲ� �� �ִ� � ���� �����ϴ� ���� '����' ��� �մϴ�.
// Variable �̶� �ϴµ�, �� �״�� �ٲ� �� �ִ� �� ���̶�� �� �Դϴ�.

#include <stdio.h>
#include <string>

int main2()
{	// ��������
	int a;	// a �������� ���� �ϴ�.

	a = 10; //  a = 10  'a'�� ������ 10�� ���� ���� �ϴ�.

	std::string s = "name";

	a = 127;

	printf("a �� ���� : %d \n", a);

	printf("s �� ���� : %s \n", s .c_str());

	printf("a �� ���� : %d  ������ %o �Դϴ�. \n", 8, a);
	printf("a �� ���� : %d  ������ %d �Դϴ�. \n", 10, a);
	printf("a �� ���� : %d  ������ %x �Դϴ�. \n", 16, a);

	return 0;
}

// char : ������  ( 'a', 'b', 'c' ) -> 'abc' (x)
// string : ���ڿ� ("Apple", "Banana")

// int : ������   ( 1, 100,4000, -56000 , -300) 
// unsigned int : ���� ������ ( 100, 5000)
// long , long long (�������ε� �����͸� ��°� ũ�ٸ�)

// float : �ε��Ҽ��� 
// unsigned float : ���� �ε��Ҽ���

/*

 %d, %o , %f , %s , %x

*/