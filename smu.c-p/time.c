// 나머지 연산자 프로그램
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
    int input, hour, minute, second;

    printf("초를 입력하세요 : ");
    scanf("%d", &input); // 초 단위의 시간을 읽는다.

    hour = input / 3600 ; // 몇 시간
    minute = (input % 3600) / SEC_PER_MINUTE ; // 몇 분
    second = input % SEC_PER_MINUTE ; // 몇 초

    printf("%d초는 %d시간 %d분 %d초 입니다.\n", input, hour, minute, second);

    return 0;
}