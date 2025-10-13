#include <stdio.h>

int main(void)
{
    int a;
    float b;
    char c;

    printf("키를 입력하세요. ");
    scanf("%d", &a);

    printf("몸무게를 입력하세요. ");
    scanf("%f", &b);

    printf("이름을 입력하세요. ");
    scanf(" %c", &c);

    printf("키 = %d\n", a);
    printf("몸무게 = %.1f\n", b);
    printf("이름 = %c\n", c);

    return 0;
}