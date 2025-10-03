#include <stdio.h>

int main (void)
{
    // 정수형 변수에 대한 예제
    int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);

    //실수형 변수에 대한 예제
    float f = 46.5f;
    printf("%.1f\n", f);
    double d = 4.428;
    printf("%.3f\n", d);

    //상수에 대한 예제
    const int YEAR = 2006;
    printf("태어난 년도 : %d\n", YEAR);
    // YEAR = 2005; -> 변수처럼 변경 불가

    return 0;
}

/* 주석 1 */
// 주석 2 //