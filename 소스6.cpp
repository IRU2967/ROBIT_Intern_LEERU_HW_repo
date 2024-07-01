#include <stdio.h>

int main(void)

{
    int floor, blank, star, n;

    printf("¸îÃþ?:");
    scanf_s("%d", &n);



    for (floor = 1; floor <= n; floor++) //Ãþ ±¸ºÐ
    {
        for (blank = 1; blank <= n - floor; blank++)  //»ï°¢Çü ¹Ù±ùÀÇ ºóÄ­ 
        {
            printf(" ");
        }
        for (star = 1; star <= 2 * floor - 1; star++) // »ï°¢Çü °Ñ¿¡ '*' , ¼Ó¿¡ " "  À» ³ªÅ¸³¾ for¹®
        {
            if (star == 1 || star == 2 * floor - 1 || floor == n)
                printf("*");
            else
                printf(" ");
        }


        printf("\n");

    }
}