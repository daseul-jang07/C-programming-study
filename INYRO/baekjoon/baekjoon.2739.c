#include <stdio.h>

int main(void)
{
    int N;
    int M;
    
    scanf("%d", &N);

    for (int M = 1; M <= 9; M++)
    {
        if (1 <= N && N <= 9)
            printf("%d * %d = %d\n", N, M, N * M);
    }
    return 0;
}