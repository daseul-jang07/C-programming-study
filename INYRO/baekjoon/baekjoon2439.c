#include <stdio.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for(int l = N-i; l > 0; l--)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}