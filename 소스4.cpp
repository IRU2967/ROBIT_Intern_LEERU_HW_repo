#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int i,Num1, Num2,pow=1;
	char ch;

	printf("Input Arithmetic Operation \nex)  3.4 * 8.5\n     2.9 - 5.4\n     3.9 * 8.0\n     3.9 ^ 8\n");
	printf("input:");
	scanf("%d %c %d", &Num1,&ch,&Num2);

	switch (ch) {
	case '+':
		printf("%d + %d = %d \n", Num1, Num2,Num1+Num2);
		break;

	case '/':
		if (Num1 == 0)
			printf("답이 없습니다.");    //예외 처리
		else
		printf("%d / %d = %d \n", Num1, Num2, Num1/Num2);
		break;

	case '-':
		printf("%d - %d = %d \n", Num1, Num2, Num1-Num2);
		break;

	case '*':
		printf("%d * %d = %d \n", Num1, Num2, Num1*Num2);
		break;

	case '^':
		for (i = 1; i <= Num2; i++) {              //for문을 이용해 Num1을 Num2번 곱하여 거듭제곱근을 나타낸 값을 pow에 대입
			pow *= Num1;
		}
		printf("%d ^ %d = %d \n", Num1, Num2, pow);
		break;

	default:
		printf("잘못 입력했습니다.\n");

	}





}