#include <stdio.h>

int main(void)

{
    int floor, blank, star, n;

    printf("����?:");
    scanf_s("%d", &n);



    for (floor = 1; floor <= n; floor++) //�� ����
    {
        for (blank = 1; blank <= n - floor; blank++)  //�ﰢ�� �ٱ��� ��ĭ 
        {
            printf(" ");
        }
        for (star = 1; star <= 2 * floor - 1; star++) // �ﰢ�� �ѿ� '*' , �ӿ� " "  �� ��Ÿ�� for��
        {
            if (star == 1 || star == 2 * floor - 1 || floor == n)
                printf("*");
            else
                printf(" ");
        }


        printf("\n");

    }
}