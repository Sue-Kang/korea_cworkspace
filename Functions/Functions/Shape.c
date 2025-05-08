#include <stdio.h>

int square(int x)
{
	return x * x;
}

float triangle(int size, int height)
{
	//강제형변환해야 실수로 반환됨
	float area = (float)(size * height) / 2;
	return area;
	//return (size * height) / 2.0;
}

int main()
{
	int rectArea;
	float triArea;

	//정사각형의 넓이
	rectArea = square(4);

	//삼각형의 넓이 계산
	triArea = triangle(3, 5);

	printf("정사각형의 넓이 : %dcm2\n", rectArea);
	printf("삼각형의 넓이 : %.1fcm2\n", triArea);

	return 0;
}