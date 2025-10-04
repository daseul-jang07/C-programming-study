#include <stdio.h>
/*
키보드에서 입력 받은 정수가 홀수인지 짝수인지를 말해주는 프로그램을 작성하여 보자.
홀수와 짝수는 어떻게 구별할 수 있는가?

if - else 문을 이용하여 홀수와 짝수를 구분한다.
*/

int main(void)
{
    int number;

    printf("정수를 입력하세요 : ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("입력된 정수는 홀수입니다.\n");
    else
        printf("입력된 정수는 짝수입니다.\n");

    return 0;
}