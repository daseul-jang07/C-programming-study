#include <stdio.h>
// 파이 구하기
/*
사용자로부터 반복횟수 loop_count를 입력받는다.
분자 = 4.0;
분모 = 1.0;
sum = 0.0;
while(loop_count > 0)
    sum = sum + 분자 / 분모;
    분자 = -1.0 * 분자;
    분모 = 분모 + 2.0;
    --loop_count;
sum을 출력한다.
*/

int main(void)
{
    double divisor, divident, sum;
    int loop_count;

    divisor = 1.0;
    divident = 4.0;
    sum = 0.0;
    printf("반복횟수 : ");
    scanf("%d", &loop_count);

    while(loop_count > 0) {
        sum = sum + divident / divisor;
        divident = -1.0 * divident;
        divisor = divisor + 2;
        loop_count--;
    }
    printf("Pi = %f", sum);
    return 0;
}