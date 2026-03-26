#include <stdio.h>

int main(void)
{
    int A, B, C;

    while(1)
    {
        scanf("%d %d", &A, &B);

        if (A == 0 && B == 0)
            break; 
            
        C = A + B;
        printf("%d\n", C);
    }

    return 0;
} 