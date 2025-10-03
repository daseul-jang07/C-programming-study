#include <stdio.h>

int main(void)
{
    // 부동소수점 오버플로우  -->  숫자가 커서 오버플로우 발생
    float x = 1e39;

    printf("x = %e\n", x);

    // 부동소수점 언더플로우  -->  숫자가 작아서 언더플로우 발생
    float i = 1.23456e-38;
    float y = 1.23456e-40;
    float z = 1.23456e-46;

    printf("i = %e\n", i);
    printf("y = %e\n", y);
    printf("z = %e\n", z);
    

    return 0;
}