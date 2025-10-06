#include <stdio.h>
#include <math.h>
/*
[알고리즘]
사용자로부터 a,b,c를 읽는다.
if a == 0
    일차 방정식의 근을 구한다.
    실근을 출력한다.
else
    판별식을 계산한다.
    if 판별식 >= 0
        근의 공식을 이용하여 실근을 구한다.
        실근을 출력한다.
    else
        실근은 없다는 메세지 출력
*/

int main(void)
{
    double a, b, c, dis;

    printf("계수 a, 계수 b, 계수 c를 차례대로 입력하세요 : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
        printf("방정식의 근은 %f입니다.", -c / b);
    else
    {
        dis = b * b - 4.0 * a * c;
        if (dis >= 0)
        {
            printf("방정식의 근은 %f입니다.\n", (-b + sqrt(dis)) / (2.0 * a));
            printf("방정식의 근은 %f입니다.\n", (-b - sqrt(dis)) / (2.0 * a));
        }
        else
            printf("실근이 존재하지 않습니다.\n");
    }
    return 0;
}
