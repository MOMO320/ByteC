#include <stdio.h>
#include <Windows.h>

int main()
{
	int i = 0;

	/// <summary>
	///  i++ (���� ������) - �Լ� ���� �Ŀ� �����ִ°�(+1)
	///  ++i (���� ������) - �Լ��� �����ϱ� ���� �����ִ°�(+1)
	/// 
	///  i = 0; // ���� ���ִ�.(�ʱ�ȭ)
	/// 
	///  i < 20 // i�� 20���� �۴�.
	/// 
	///  i++ (i�� 1�� �����ش�.)
	/// 
	/// </summary>
	/// <returns></returns>

	// �ʱ�ȭ ; ����(if) ; ��

	// < (�ʰ�, �̸�) , <= (�̻�, ����)

	/*if(i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}

	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}

	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}
	if (i < 20)
	{
		i += 2;
		printf("���� : %d \n", i);
	}*/

	// �ݺ���

	 int test;
	 test = 10; 

	 int sum = 0;

	for ( int j = 0 ; j < 20; ++j)
	{
		sum = sum + 10; // (����)
		//printf("���� : %d \n", sum);
	}

	//printf("���� : %d \n", sum);

	char a;

	//scanf_s("%c", &a);
	//printf("%c \n", a);

	// �ݺ���
	int money = 10000;

	while (money >= 0)
	{
		int paid = 0;
		char dummy, ch;
		printf("�ȳ��ϼ���. ���� ������ �ּ��� : ");
		
		scanf_s("%d", &paid);
		money -= paid;

		printf("���� �ݾ��� %d �Դϴ�. \n", money);

		printf(" �� �����Ͻðڽ��ϱ�?(y�� ��ӱ��� / n�� ���Ÿ� �׸� �Ӵϴ�.) :");

		scanf_s("%c", &dummy);
		scanf_s("%c",&ch);

		if (ch == 'y')
		{
			system("cls");	// �ܼ�â �����ִ� �Լ�
			continue;	// �ǳʶپ� �ִ� Ű����
		}
		else
			break;		// �Լ��� ���� �ϴ� Ű����
	}
	
	return 0;
}