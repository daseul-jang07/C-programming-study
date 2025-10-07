#include <stdio.h>

int main(void)
{
    int H;
    int M;

    scanf("%d %d", &H, &M);

    if (M < 45)
        printf("%d %d", (H + 23) % 24, M+15);
    else if (M >= 45)
        printf("%d %d", H, M-45);

    return 0;
}