// 변수란, 바뀔 수 있는 어떤 값을 보관하는 곳을 '변수' 라고 합니다.
// Variable 이라 하는데, 말 그대로 바뀔 수 있는 것 들이라는 뜻 입니다.

#include <stdio.h>
#include <string>

int main2()
{	// 데이터형
	int a;	// a 정수형을 선언 하다.

	a = 10; //  a = 10  'a'의 변수에 10의 값을 정의 하다.

	std::string s = "name";

	a = 127;

	printf("a 의 값은 : %d \n", a);

	printf("s 의 값은 : %s \n", s .c_str());

	printf("a 의 값은 : %d  진수로 %o 입니다. \n", 8, a);
	printf("a 의 값은 : %d  진수로 %d 입니다. \n", 10, a);
	printf("a 의 값은 : %d  진수로 %x 입니다. \n", 16, a);

	return 0;
}

// char : 문자형  ( 'a', 'b', 'c' ) -> 'abc' (x)
// string : 문자열 ("Apple", "Banana")

// int : 정수형   ( 1, 100,4000, -56000 , -300) 
// unsigned int : 양의 정수형 ( 100, 5000)
// long , long long (정수형인데 데이터를 담는게 크다면)

// float : 부동소수형 
// unsigned float : 양의 부동소수형

/*

 %d, %o , %f , %s , %x

*/