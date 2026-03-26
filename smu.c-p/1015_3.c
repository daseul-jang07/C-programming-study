#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c && c == a)
        printf("정삼각형입니다.\n");
    else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        printf("직각삼각형입니다.\n");
    else if (a == b || b == c || c == a)
        printf("이등변 삼각형입니다.\n");
    else
        printf("일반 삼각형입니다.\n");

    return 0;
    
}