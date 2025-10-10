#include <stdio.h>
// 소문자를 대문자로 변경한다.

int main(void)
{
    char letter;

    while(1)
    {
        printf("소문자를 입력하세요 : ");
        scanf("%c", &letter);

        if(letter == 'Q')
            break;
        if(letter < 'a' || letter > 'z')
            continue;

        letter -= 32;
        printf("변환된 대문자는 %c입니다.\n", letter);
    }
    return 0;
}