#include <stdio.h>

int main(void)
{
    int A;
    int B;
    int C;

    scanf("%d %d %d", &A, &B, &C);

    if (A == B && A == C && B == C)
        printf("%d\n", 10000 + A * 1000);
    else if (A == B && A != C)
        printf("%d\n", 1000 + A * 100);
    else if (A == C && A != B)
        printf("%d\n", 1000 + A * 100);
    else if (B == C && B != A)
        printf("%d\n", 1000 + B * 100);
    else if (A != B && A != C && B != C){
            if (A > B && A > C)
            printf("%d\n", A * 100);
        else if (B > A && B > C)
            printf("%d\n", B * 100);
        else if (C > A && C > B)
            printf("%d\n", C * 100);
    }

    return 0;
}