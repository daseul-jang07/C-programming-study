#include <stdio.h>
/*
사용자로부터 두 개의 정수를 입력 받아서 정수 간의 나눗셈을 실행한다.
나눗셈을 하기 전에 분모가 0인지를 if문을 이용하여 검사한다.
*/

int main(void)
{
    int x;
    int y;
    int result;

    printf("분자와 분모를 입력하세요 : ");
    scanf("%d %d", &x, &y);

    if (y == 0)
    {
        printf("분모가 0이여서 나눗셈이 불가합니다.\n");
    }
    else
    {
        result = x / y;
        printf("결과는 %d입니다.\n", result);
    }

    return 0;
}