#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void) {
	int year;
	printf("년도를 입력하세요 :");
	scanf("%d", &year);
	if (year %4 == 0 && year % 100 != 0) {     //4의 배수이지만 100의 배수는 아닐때
		printf("윤년입니다.");
	}
	if (year % 400 == 0) {                         //400의 배수 일때
		printf("윤년입니다.");
	}
	else
		printf("윤년이 아닙니다.");
}