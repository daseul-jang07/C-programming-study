#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float radius; //원의 반지름
    float area; //면적
    float circ; //둘레
    float vol; //부피

    printf("반지름을 입력하시오 : ");
    scanf("%f", &radius);
    area = 3.14*radius*radius;
    printf("원의 면적 : %f\n", area);
    
    printf("반지름을 입력하시오 : ");
    scanf("%f", &radius);
    circ = 2*3.14*radius;
    printf("원의 둘레 : %f\n", circ);

    printf("반지름을 입력하시오 : ");
    scanf("%f", &radius);
    vol = 4/3*radius*radius*radius*3.14;
    printf("구의 부피 : %f\n", vol);

    return 0;
}