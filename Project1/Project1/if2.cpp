#include <stdio.h>

int main16()
{
	double i, j;
	printf("������ ���� �� ������ �Է� �ϼ��� : ");
	scanf_s("%lf %lf", &i, &j);

	if (j == 0)
	{
		printf("0 ���� ���� �� �����ϴ�. \n");
		return 0;
	}

	printf("%f �� %f �� ���� ����� : %f \n", i, j, i / j);

	return 0;
}