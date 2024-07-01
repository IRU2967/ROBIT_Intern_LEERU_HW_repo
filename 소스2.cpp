#include<stdio.h>
int main(void)
{
	int i,n, first = 0;
	int second = 1;
	int next = 1;
	printf("n입력:");
	scanf_s(" %d", &n);

	if (n == 1) {
		printf("0");
	}
	                                 //첫째항과 두번째항은 각각 0,1로 고정
	if (n == 2)
	{
		printf("1");
	}
	if (n > 2)
	{
		for (i = 2; i < n; i++) {
			next = first + second;  //기본적인 피보나치 수열의 정의
			first = second;      //순차적으로 first 자리에 second에 있던 수를 대입하고  second 자리에 next에 있던 수를 대입하여 진행
			second = next;

		}
		printf("%d", next);
	}
}