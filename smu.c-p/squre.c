#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double w;
    double h;
    double ht;
    double area;
    double perimeter;
    double surfArea;
    double vol;

    w = 10.0;
    h = 5.0;
    ht = 7.0;

    area = w*h;
    perimeter = 2*(w+h);
    surfArea = w*h*2 + w*ht*2 + h*ht*2;
    vol = w*h*ht;

    printf("사각형의 넓이 : %lf\n", area);
    printf("사각형의 둘레 : %lf\n", perimeter);
    printf("육면체의 표면적 : %lf\n", surfArea);
    printf("육면체의 부피 : %lf\n", vol);
    return 0;

}