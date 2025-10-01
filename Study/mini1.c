#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 정수를 받아들이는 프로그램

int main(void)
{
    int i; // 정수를 저장할 변수
    printf("정수를 입력하시오 : ");
    scanf("%d", &i);
    printf("입력된 정수 = %d\n", i);

    return 0;
}