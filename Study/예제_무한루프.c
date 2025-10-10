#include <stdio.h>
#include <math.h>
// break를 이용하여 무한루프를 탈출한다.

int main(void)
{
    double v;

    while(1)
    {
        printf("실수값을 입력하세요 : ");
        scanf("%lf", &v);
        if (v < 0.0)
            break;
        printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v));
    }
    
    return 0;
}