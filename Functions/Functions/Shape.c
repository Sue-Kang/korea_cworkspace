#include <stdio.h>

int square(int x)
{
	return x * x;
}

float triangle(int size, int height)
{
	//��������ȯ�ؾ� �Ǽ��� ��ȯ��
	float area = (float)(size * height) / 2;
	return area;
	//return (size * height) / 2.0;
}

int main()
{
	int rectArea;
	float triArea;

	//���簢���� ����
	rectArea = square(4);

	//�ﰢ���� ���� ���
	triArea = triangle(3, 5);

	printf("���簢���� ���� : %dcm2\n", rectArea);
	printf("�ﰢ���� ���� : %.1fcm2\n", triArea);

	return 0;
}