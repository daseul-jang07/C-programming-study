#include <stdio.h>

int main(void)
{
    int x, y, z, sum;

    sum = 0; // 변수는 사용하기 전에 반드시 초기화 시켜야 함 !!
    printf("3개의 정수를 입력하세요. (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);
    sum += x;
    sum += y;
    sum += z;
    printf("3개 정수의 합은 %d\n", sum);

    return 0;
}