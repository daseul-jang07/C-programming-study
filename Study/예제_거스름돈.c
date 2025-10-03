#include <stdio.h>
// 거스름돈 계산하기

int main(void)
{
    int money, change;
    int price, c1000, c500, c100;

    printf("물건 값을 입력하세요 : ");
    scanf("%d", &price); // 물건 값을 입력받는다.

    printf("투입한 금액을 입력하세요 : ");
    scanf("%d", &money); // 투입한 금액을 입력받는다.
    change = money - price; // 거스름돈을 change에 저장

    c1000 = change / 1000; // 남은 잔돈에서 1000원권의 개수를 계산한다.
    change = change % 1000; // 나머지 연산자를 사용하여 남은 잔돈에서 계산한다.

    c500 = change / 500; // 남은 잔돈에서 500원 동전의 개수를 계산한다.
    change = change % 500; // 나머지 연산자를 사용하여 남은 잔돈에서 계산한다.

    c100 = change / 100; // 남은 잔돈에서 100원 동전의 개수를 계산한다.
    change = change % 100; //나머지 연산자를 사용하여 남은 잔돈에서 계산한다.

    printf("\n천 원권 : %d장\n", c1000);
    printf("\n오백 원 동전 : %d개\n", c500);
    printf("\n백 원 동전 : %d개\n", c100);

    return 0;
}