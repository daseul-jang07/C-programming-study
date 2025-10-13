#include <stdio.h>

int main(void)
{
    int a, b;

    printf("두 개의 수를 입력하시오. ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n",a , b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

    return 0;
}