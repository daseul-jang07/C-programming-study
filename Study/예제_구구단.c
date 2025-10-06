#include <stdio.h>
// 구구단 출력 프로그램 - goto문

int main(void)
{
    int i = 1;
loop :
    printf("%d * %d = %d \n", 3, i, 3 * i);
    i++;
    if (i == 10) goto end;
    goto loop;

end :
    return 0;
}