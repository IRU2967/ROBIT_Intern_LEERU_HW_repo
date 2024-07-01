#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    float input1, input2;
    float num = 0;


    printf("1 번째 실수를 입력하시오. ");
    scanf_s("%f", &input1);
    float max = input1;
    float min = input1;

    for (int i = 2; i <= 5; i++)
    {
        printf("%d 번째 실수를 입력하시오. ", i);
        scanf_s("%f", &input2);


        if (input2 >= max)  //for문 안에 input2 가 max 보다 큰 값이 나올 때마다 max에 input2의 값을 대입함
        {
            max = input2;
        }
        else if (input2 <= min)  //그렇지 않을 경우 min에 input2를 대입하는 시행 반복
        {
            min = input2;
        }
        num += input2;   //for문 안에서 나왔었던 수들을 모두 합하여 num에 대입
    }

    printf("평균은 %.2f 입니다.", (num+input1) / 5); //num과 input1의 값을 더한 후 5로 나눠 평균을 구함
    printf("최댓값은 %.2f 입니다.", max);
    printf("최솟값은 %.2f 입니다.", min);

}




