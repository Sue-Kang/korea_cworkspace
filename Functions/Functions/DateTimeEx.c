#define _CRT_SECURE_NO_WARNINGS  //
#include <stdio.h>
#include <time.h>

int main()
{
	//��¥ ǥ��
	time_t ct;	//���� �ð� ���� ����
	struct tm* now;	  //������ ���� ����

	//���� �ð� ��������
	ct = time(NULL);
	now = localtime(&ct);  //ct�� �ּҸ� �Ű��� ����

	printf("%d��\n", now->tm_year + 1900);
	printf("%d��\n", now->tm_mon + 1);
	printf("%d��\n", now->tm_mday);


	return 0;
}