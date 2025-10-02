/* 반복문
   for, while, do while */

#include <stdio.h>

int main(void)
{
// for (선언 ; 조건 ; 증감)
    for (int i = 1 ; i <= 10 ; i++)
    {
        printf("Hello World %d\n", i);
    }

// while (조건)
    int i = 1;
    while (i <= 10)
    {
        printf("Hello World %d\n", i++);
        // i++;
    }
    
// do {} while (조건);
    int t = 1;
    do {
        printf("Hello World %d\n", t++);
    } while(t <= 10);

// 2중 반복문
    for(int r = 1; r <= 3; r++)
    {
        printf("첫 번째 반복문 : %d\n", r);

        for(int j = 1; j <= 5; j++)
        {
            printf("    두 번째 반복문 : %d\n", j);
        }
    }

    return 0;
}