#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void) {
	int year;
	printf("�⵵�� �Է��ϼ��� :");
	scanf("%d", &year);
	if (year %4 == 0 && year % 100 != 0) {     //4�� ��������� 100�� ����� �ƴҶ�
		printf("�����Դϴ�.");
	}
	if (year % 400 == 0) {                         //400�� ��� �϶�
		printf("�����Դϴ�.");
	}
	else
		printf("������ �ƴմϴ�.");
}