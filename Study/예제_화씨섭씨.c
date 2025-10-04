#include <stdio.h>
// 화씨 온도를 섭씨로 바꾸기

int main(void)
{
    double f_temp;
    double c_temp;

    printf("화씨 온도를 입력하세요 : ");
    scanf("%lf", &f_temp);
    c_temp = 5.0 / 9.0 * (f_temp - 32); // 5/9를 할 경우, 0으로 계산되지만 실수 나눗셈의 경우 소수점이 남음
    printf("섭씨 온도는 %f입니다.\n", c_temp);

    return 0;
}