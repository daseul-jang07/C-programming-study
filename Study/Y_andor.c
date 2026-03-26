#include <stdio.h>

int main(void)
{
    // && ||
    int a = 10;
    int b = 11;
    int c = 13;
    int d = 13;
    
    if (a == b || c == d)
    {
        printf("a와 b, 혹은 c와 d의 값이 같습니다.\n");
    }
    else
    {
        printf("값이 서로 다르네요\n");
    }

    return 0;
}