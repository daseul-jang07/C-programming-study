#include <stdio.h>
// 직각 삼각형 찾기
/*
for(a = 1; a <= 100; a++)
    for(b = 1; b <= 100; b++)
        for(c = 1; c <= 100; c++)
            if(a * a + b * b == c * c)
                a와 b와 c를 화면에 출력한다.
*/

int main(void)
{
    int a, b, c;
    for (a = 1; a <= 100; a++){
        for (b = 1; b <= 100; b++){
            for (c = 1; c <= 100; c++){
                if ((a * a + b * b) == c * c)
                    printf("%d %d %d\n", a, b, c);
            }
        }
    }
    return 0;
}