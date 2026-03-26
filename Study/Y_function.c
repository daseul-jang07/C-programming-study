#include <stdio.h>

// 선언
void p(int num);

void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate); // 전체 total개에서 ate개를 먹고 남은 수를 반환

int main(void)
{
    // function
    // 계산기
    int num = 2;
    //printf("num은 %d입니다.\n", num); // 2
    p(num);

    // 2 + 3은?
    num = num + 3; // num += 3;
    //printf("num은 %d입니다.\n", num); // 5
    p(num);

    // 5 - 1은?
    num -= 1; //num = num - 1;
    //printf("num은 %d입니다.\n", num); // 4
    p(num);

    // 4 X 3은?
    num *= 3;
    //printf("num은 %d입니다.\n", num); // 12
    p(num);

    // 12 / 6은?
    num /= 6;
    //printf("num은 %d입니다.\n", num); // 2
    p(num);

    function_without_return();
    //int ret = function_with_return();
    //p(ret);

    function_without_params();
    function_with_params(35, 27, 12);

    //int ret = apple(5, 2); // 5개의 사과 중에서 2개를 먹었어요.
    //printf("사과 5개 중에 2개를 먹으면? %d개가 남아요.\n", ret);
    printf("사과 %d개 중에 %d개를 먹으면? %d개가 남아요.\n", 10, 4, apple(10, 4));

    return 0;
}

// 정의
void p(int num) // void : 아무것도 없다는 의미, 반환하지 않겠다는 의미
{
    printf("num은 %d입니다.\n", num);
}

// 반환형 함수이름(전달값)
// int 함수이름(num) // 맨 위에 선언한 부분과 동일해야 함
// {
//     return num + 4;
// }
// void 함수이름(int num1, int num2, char c, float f) // 전달값 여러 개 가능

// 함수 종류
// 반환값이 없는 함수
void function_without_return()
{
    printf("반환값이 없는 함수입니다.\n");
}
// 반환값이 있는 함수
int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}
// 전달값이 없는 함수 -> 파라미터
void function_without_params()
{
    printf("전달값이 없는 함수입니다.\n");
}
// 전달값이 있는 함수 -> 파라미터
void function_with_params(int num1, int num2, int num3)
{
    printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다.\n",
        num1 , num2, num3);
}
// 반환값과 전달값(파라미터)이 있는 함수
int apple(int total, int ate)
{
    printf("전달값과 반환값이 있는 함수입니다.\n");
    return total - ate;
}