#include <stdio.h>

int main(void)
{
    int A;
    int B;
    int C;

    scanf("%d %d\n", &A, &B);
    scanf("%d", &C);

    if(C > B)
        printf("%d %d", A, B + 30);
    else if(C < B)
    return 0;
}