#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    float input1, input2;
    float num = 0;


    printf("1 ��° �Ǽ��� �Է��Ͻÿ�. ");
    scanf_s("%f", &input1);
    float max = input1;
    float min = input1;

    for (int i = 2; i <= 5; i++)
    {
        printf("%d ��° �Ǽ��� �Է��Ͻÿ�. ", i);
        scanf_s("%f", &input2);


        if (input2 >= max)  //for�� �ȿ� input2 �� max ���� ū ���� ���� ������ max�� input2�� ���� ������
        {
            max = input2;
        }
        else if (input2 <= min)  //�׷��� ���� ��� min�� input2�� �����ϴ� ���� �ݺ�
        {
            min = input2;
        }
        num += input2;   //for�� �ȿ��� ���Ծ��� ������ ��� ���Ͽ� num�� ����
    }

    printf("����� %.2f �Դϴ�.", (num+input1) / 5); //num�� input1�� ���� ���� �� 5�� ���� ����� ����
    printf("�ִ��� %.2f �Դϴ�.", max);
    printf("�ּڰ��� %.2f �Դϴ�.", min);

}




