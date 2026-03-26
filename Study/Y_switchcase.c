#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    // 가위: 0, 바위: 1, 보: 2
    srand(time(NULL));
    int i = rand() % 3; // 0 ~ 2 반환
    switch (i)
    {
        case 0: printf("가위\n"); break;
        case 1: printf("바위\n"); break;
        case 2: printf("보\n"); break;
        default: printf("몰라요\n"); break;
    }

    // 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)으로 나누면?
    int age = 11;
    switch (age)
    {
        case 8: 
        case 9: 
        case 10: 
        case 11: 
        case 12: 
        case 13: printf("초등학생입니다.\n"); break;
        case 14: 
        case 15: 
        case 16: printf("중학생입니다.\n"); break;
        case 17: 
        case 18: 
        case 19: printf("고학생입니다.\n"); break;
        default: printf("학생이 아닌가봐요.\n"); break;
    }

    return 0;
}