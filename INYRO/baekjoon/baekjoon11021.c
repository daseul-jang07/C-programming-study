#include <stdio.h>

int main(void)
{
    int T, A, B, C;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &A, &B);
        C = A + B;
        printf("Case #%d: %d + %d = %d\n", i, A, B, C);
    }
    
    return 0;
}