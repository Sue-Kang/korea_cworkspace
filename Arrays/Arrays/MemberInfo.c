//#define _CRT_SECURE_NO_WARNINGS //scanf() ���� ���� ����
#include <stdio.h>

int main()
{
	//ȸ���� ������ �Է� - id, password, name, weight, height
	char id[20], password[256], name[30];
	float weight, height;

	printf("\n=== ȸ�� ���� �Է� ===\n");
	printf("���̵� �Է�: ");
	//scanf("%s", id);   //�迭�� �ּ� ������(&) ������� ����
	//sizeof(id) - �Է� ũ�⸦ ������ ���� �����÷ο� ����
	scanf_s("%s", id, sizeof(id));  

	printf("�н����� �Է�: ");
	scanf_s("%s", password, sizeof(id));

	printf("�̸� �Է�: ");
	scanf_s("%s", name, sizeof(id));

	printf("Ű �Է�: ");
	scanf_s("%f", &height);

	printf("������ �Է�: ");
	scanf_s("%f", &weight);




	//ȸ�� ���� ���
	printf("\n=== ȸ�� ���� ��� ===\n");
	printf("���̵�: %s\n", id);
	printf("�н�����: %s\n", password);
	printf("�̸�: %s\n", name);
	printf("Ű: %3.1f\n", height);
	printf("������: %3.1f\n", weight);


	return 0;
}