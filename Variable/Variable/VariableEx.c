#include <stdio.h>

/*
	변수 - 프로그램에서 데이터를 저장하는 메모리 공간
	자료형 - 한 문자(char), 정수(int), 실수(double)
*/
int main()
{
	//변수 선언 방법 - 자료형 변수이름
	int n1;  //정수형 변수 선언 
	n1 = 5; //값을 저장(초기화)

	int n2 = 10;

	//메모리의 주소[&(엠퍼샌드) - 주소연산자]
	printf("%d %x\t", n1, &n1);
	printf("%d %x\t", n2, &n2);

	printf("두 수의 합: %d\n", n1 + n2);
	printf("두 수의 차: %d\n", n1 - n2);


	double rate = 0.75;

	printf("대한민국의 2024년 출산율은 %.21f입니다.", rate);

	char grade = 'A';

	printf("그 호텔의 서비스는 %c등급이다.\n", grade);


	char name = "사과";

	printf("그 과일의 이름은 %s입니다.\n", name);
	return 0;
}