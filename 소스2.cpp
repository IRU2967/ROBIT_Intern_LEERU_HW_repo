#include<stdio.h>
int main(void)
{
	int i,n, first = 0;
	int second = 1;
	int next = 1;
	printf("n�Է�:");
	scanf_s(" %d", &n);

	if (n == 1) {
		printf("0");
	}
	                                 //ù°�װ� �ι�°���� ���� 0,1�� ����
	if (n == 2)
	{
		printf("1");
	}
	if (n > 2)
	{
		for (i = 2; i < n; i++) {
			next = first + second;  //�⺻���� �Ǻ���ġ ������ ����
			first = second;      //���������� first �ڸ��� second�� �ִ� ���� �����ϰ�  second �ڸ��� next�� �ִ� ���� �����Ͽ� ����
			second = next;

		}
		printf("%d", next);
	}
}