#include <stdio.h>

/*
	���� - ���α׷����� �����͸� �����ϴ� �޸� ����
	�ڷ��� - �� ����(char), ����(int), �Ǽ�(double)
*/
int main()
{
	//���� ���� ��� - �ڷ��� �����̸�
	int n1;  //������ ���� ���� 
	n1 = 5; //���� ����(�ʱ�ȭ)

	int n2 = 10;

	//�޸��� �ּ�[&(���ۻ���) - �ּҿ�����]
	printf("%d %x\t", n1, &n1);
	printf("%d %x\t", n2, &n2);

	printf("�� ���� ��: %d\n", n1 + n2);
	printf("�� ���� ��: %d\n", n1 - n2);


	double rate = 0.75;

	printf("���ѹα��� 2024�� ������� %.21f�Դϴ�.", rate);

	char grade = 'A';

	printf("�� ȣ���� ���񽺴� %c����̴�.\n", grade);


	char name = "���";

	printf("�� ������ �̸��� %s�Դϴ�.\n", name);
	return 0;
}