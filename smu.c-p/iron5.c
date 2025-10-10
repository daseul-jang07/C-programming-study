// white iron 2024-C1-중간 5번 문제

#include <stdio.h>

int main(void)
{
    for (double C = -10.00; C <= 38.00; C += 6.00)
        printf("%.2fC == %.2fF\n", C, C * 9 / 5 + 32);

    return 0;
}