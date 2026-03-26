#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    printf("\n\n === 아빠는 대머리 게임 === \n\n");
    int answer; // 사용자 입력값
    int treatment = rand() % 4; // 발모제 선택 (0~3)

    int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수
    int prevShowBottle = 0; // 앞 게임에 보여준 병 갯수
    // 서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2개 -> 다음엔 3개 ..)

    // 3번의 기회 (3번의 발모제 투여 시도)
    for(int i=1; i<=3; i++)
    {
        int bottle[4] = {0, 0, 0, 0}; // 4개의 병
        do {
            cntShowBottle = rand() % 2 + 2; // 보여줄 병 갯수 (0 ~ 1, +2 -> 2, 3)
        } while (cntShowBottle == prevShowBottle);

        int isIncluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부
        printf(" > %d번째 시도 : ", i);

        // 보여줄 병 종류를 선택
        for (int j=0; j<cntShowBottle; j++)
        {
            int randBottle = rand() % 4; // 0 ~ 3

            // 아직 선택되지 않은 병이면, 선택 처리
            if (bottle[randBottle] == 0)
            {
                bottle[randBottle] = 1;
            }
            // 이미 선택된 병이면, 중복이므로 다시 선택
            else{
                j--;
            }
        }
    }

    return 0;
}