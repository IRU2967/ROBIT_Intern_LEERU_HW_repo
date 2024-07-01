#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int floor, j,n;

	printf("값을 입력하세요:");
	scanf("%d", &n);
	for (floor = 1; floor < 2*n; floor++) {
        if(floor <= n)
        {
            for (int j = 0; j < floor; j++)
            {
                printf("*");
            }
            for (int j = 0; j < 2 * (n - floor); j++)
            {
                printf(" ");
            }
            for (int j = 0; j < floor; j++)
            {
                printf("*");
            }
            printf("\n");

        }
      else if (floor > n)
      {
          for (int j = 1; j <= (n - (floor - n)); j++)
          {
              printf("*");
          }
          for (int j = 1; j <= 2 * (floor - n); j++)
          {
              printf(" ");
          }
          for (int j = 1; j <= (n - (floor - n)); j++)
          {
              printf("*");
          }
          printf("\n");

      }

    }
}
	