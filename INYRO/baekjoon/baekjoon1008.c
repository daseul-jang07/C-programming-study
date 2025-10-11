#include <stdio.h>

int main(void)
{
    int A;
    int B;
    double div;

    scanf("%d", &A);
    scanf("%d", &B);

    div = (double)A/B;
    printf("%.20f", div);

    return 0;
}