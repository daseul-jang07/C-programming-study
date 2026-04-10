#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printStudents(char* const names[], const int* scores, int size);
void calcAverage(const int* scores, int size);
void printAboveScore(char* const names[], const int* scores, int size, int minScore);

int main() {
    char* names[5];         
    int scores[5];            
    char buffer[50];       
    int minScoreInput;

    for (int i = 0; i < 5; i++) {
        printf("%d번째 학생 이름 입력: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; 

        names[i] = (char*)malloc(strlen(buffer) + 1);
        strcpy(names[i], buffer);

        printf("%d번째 학생 성적 입력: ", i + 1);
        scanf("%d", &scores[i]);
        while (getchar() != '\n'); 
    }

    printf("\n--- 전체 학생 정보 ---\n");
    printStudents(names, scores, 5); 

    printf("\n--- 평균 성적 ---\n");
    calcAverage(scores, 5); 

    printf("\n조회할 기준 점수를 입력하세요: ");
    scanf("%d", &minScoreInput);
    
    printf("\n--- %d점 이상 학생 목록 ---\n", minScoreInput);
    printAboveScore(names, scores, 5, minScoreInput); 

    for (int i = 0; i < 5; i++) {
        free(names[i]);
    }

    return 0;
}

void printStudents(char* const names[], const int* scores, int size) {
    for (int i = 0; i < size; i++) {
        printf("이름: %-20s | 성적: %d\n", names[i], scores[i]);
    }
}

void calcAverage(const int* scores, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    printf("전체 평균: %.2f점\n", (double)sum / size);
}

void printAboveScore(char* const names[], const int* scores, int size, int minScore) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (scores[i] >= minScore) {
            printf("이름: %-20s | 성적: %d\n", names[i], scores[i]);
            found++;
        }
    }
    if (found == 0) {
        printf("%d점 이상인 학생이 없습니다.\n", minScore);
    }

    return 0;
}