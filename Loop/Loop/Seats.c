#include <stdio.h>

int main()
{
	/*
		�ڸ���ġ�� ���α׷�
		- ���尴 ���� �¼� ������ �־����� ��
		- ��(��) �� ����ϰ�
		- �ڸ� ���
	*/
	int customer;	//���尴 ��
	int column;		//�¼� ����
	int row;			//�¼� �ټ�
	int seat;		//�¼�

	printf("���尴 �� �Է�: ");
	scanf_s("%d", &customer);

	printf("�¼��� �� �Է�: ");
	scanf_s("%d", &column);

	if (customer % column == 0)
	{
		//������ int���� ��(����ȯ �� �ʿ����)
		row = customer / column;
	}
	else
	{
		row = (customer / column) + 1;
	}
	//printf("�� ��: %d\n", row);

	//�ڸ� ��ġ - ��ø for -> �ܺ�(��), ����(��)
	for (int i = 0; i < row; i++)
	{
		for (int j = 1; j <= column; j++)
		{
			seat = column * i + j;	//�¼� ��ȣ
			if (seat > customer) break;
			printf("�¼� %d ", seat);
		}
		printf("\n");
	}


	return 0;
}