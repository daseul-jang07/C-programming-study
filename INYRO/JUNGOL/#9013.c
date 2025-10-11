#include <stdio.h>

int main(void)
{
    double x, y;

    x = 1.2340;
    y = 10.3459;

    printf("전체 7자리로 맞추고 소수 4자리까지 출력\n");
    printf("x =  %.4f\n", x);
    printf("y = %.4f\n", y);

    x = 1.23;
    y = 10.35;

    printf("\n");
    printf("소수 2자리까지 출력(반올림)\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}