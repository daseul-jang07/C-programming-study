// white iron 2024-C1-중간 6번 문제

/*
6. while, for 등의 반복문을 사용하여 1! 부터 10! 까지
출력하는 프로그램을 6.c로 작성하고 comment가 들어간
소스코드 캡처와 결과 캡처를 넣으시오. 6.c를 제출하시오.
*/

#include <stdio.h>

int main(void)
{
    int f = 1;

    for(int i = 1; i < 11; i++)
    {
        for(int j = i; 0 < j; j--)
            f *= j;
            printf("%d\n", f);
        f = 1;
    }

    return 0;
}