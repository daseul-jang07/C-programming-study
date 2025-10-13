#include <stdio.h>

int main(void)
{
    float yard;

    printf("yard? ");
    scanf("%f", &yard);

    printf("%.1fyard = %.1fcm\n", yard, yard * 91.44);

    return 0;
}