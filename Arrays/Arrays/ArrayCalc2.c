#include <stdio.h>

int main()
{
	/*
		������ ����, �հ�, ���, �ִ�, �ּҰ�
	*/

	int score[5] = { 85, 75, 90, 75, 80 };
	int i;  //�ݺ� ����
	int sum = 0;  //�հ�
	double avg;  //���
	int min;	//�ּ�
	int max;    //�ִ�

	//�迭�� ũ��(����) - count
	int count = sizeof(score) / sizeof(score[0]);  // 20 byte / 4 byte = 5
	printf("�迭�� ũ��: %d\n", count);

	//������ �հ�
	//sum = score[0] + score[1] + score[2];
	for (i = 0; i < count; i++)
	{
		sum += score[i];  //sum = sum + score[i];
	}
	printf("�հ� = %d\n", sum);
	//��� = �հ� / ����
	avg = (double)sum / count;  //������ int�� �ǹǷ� (double)�� ���� ����ȯ
	printf("��� = %.1f\n", avg);

	//�ּҰ�
	min = score[0];  //�迭�� ù°���� �ּҰ� ����
	for (i = 0; i < count; i++)
	{
		if (score[i] < min)  //���� ������ �ּҰ����� ������
			min = score[i];  //�� ������ �ּҰ��� ����
	}
	/*
		i=1; 85 < 75  min=75
		i=2; 90 < 75  min=75
		i=3; 75 < 75  min=75
		i=4; 80 < 75  min=75
	*/
	printf("�ּڰ�: %d\n", min);

	//�ִ�
	max = score[0];  
	for (i = 0; i < count; i++)
	{
		if (score[i] > max)  //���� ������ �ִ񰪺��� ũ��
			max = score[i];  //�� ������ �ּڰ��� ����
	}
	printf("�ִ�: %d\n", max);

	return 0;
}