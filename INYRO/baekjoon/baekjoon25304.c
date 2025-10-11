#include <stdio.h>

int main(void)
{
    int X, N, a, b, sum = 0;
    
    scanf("%d\n", &X);
    scanf("%d\n", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d\n", &a, &b);
        sum += a * b;
    }

    if (X == sum)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}