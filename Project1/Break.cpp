#include <stdio.h>

int main30()
{
	int usranswer;

	printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������! \n");

	// �ݺ��� for(  �ʱ�ȭ  ; ���ǹ�  ; ��  )
	for (;;)
	{
		scanf_s("%d", &usranswer);

		if (usranswer == 3) // ���࿡ ���ǽ��� �´ٸ�
		{
			printf("���߼̱���! \n");
			break;	// ������ �ݺ��������� ��� �� �� �ִ�.(���� �޶� ��)
			// break���� ������ �ݺ������� ������.
		}
		else if (usranswer == 5)
		{
			printf("�߰��� ���̳׿�! \n");
			break;
		}
		else  // ���࿡ ���ǽ��� Ʋ���ٸ�
		{
			// ���ǹ��� ���� �ʴ´ٸ� �����
			printf("Ʋ�Ⱦ��! \n");
		}
	}

	return 0;
}