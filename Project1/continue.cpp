#include <stdio.h>

int main32()
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 5 == 0) continue;

		printf("%d \n", i);
	}

      return 0;
}