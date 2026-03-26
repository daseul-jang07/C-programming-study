#include <stdio.h>

// 함수 프로토타입 선언
void inputGrades(int arr[], int size);
void printGrades(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
double calculateAverage(int arr[], int size);
void bubbleSort(int arr[], int size);

int main() {
    int grades[10];
    int size = 10;

    // 1. 성적 입력
    inputGrades(grades, size);

    // 2. 정렬 전 출력
    printf("\n[입력된 성적 목록]\n");
    printGrades(grades, size);

    // 3. 최고/최저 점수 및 평균 계산
    printf("\n최고 점수: %d\n", findMax(grades, size));
    printf("최저 점수: %d\n", findMin(grades, size));
    printf("평균 점수: %.2f\n", calculateAverage(grades, size));

    // 4. 성적 정렬 (버블 정렬)
    bubbleSort(grades, size);

    // 5. 정렬 후 출력
    printf("\n[정렬된 성적 목록 (오름차순)]\n");
    printGrades(grades, size);

    return 0;
}

// 성적 입력 함수
void inputGrades(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d번 학생의 성적을 입력하세요 (0~100): ", i + 1);
        scanf("%d", &arr[i]);
        // 범위를 벗어난 입력에 대한 예외 처리를 추가하면 더 좋습니다.
        if (arr[i] < 0 || arr[i] > 100) {
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");
            i--;
        }
    }
}

// 성적 출력 함수
void printGrades(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 최고 점수 찾기
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

// 최저 점수 찾기
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

// 평균 계산
double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

// 버블 정렬 (제공된 알고리즘 수정 적용)
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}