#include <stdio.h>

int main()
{
    int S[8][8] = {
        {0,0,3,0,0,0,0,0},
        {0,0,0,0,7,0,0,0},
        {4,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0},
        {2,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0},
        {4,0,0,0,0,0,0,0},
        {5,6,7,0,0,0,0,0}
    };

    int S_value[11][3] = {8,8,10,0,}; // 희소 행렬의 0이 아닌 요소의 값과 위치를 저장할 배열

    int count = 0; // 0이 아닌 요소의 개수를 세는 변수
    count += 1; //첫번째 row는 원래 행렬의 정보를 넣어야 되기 때문에 1부터 카운트


    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (S[i][j] != 0) {
                S_value[count][0] = i; // 행 인덱스 저장
                S_value[count][1] = j; // 열 인덱스 저장
                S_value[count][2] = S[i][j]; // 값 저장
                count++; // 0이 아닌 요소의 개수 증가
            }
        }
    }


    printf("S_value 출력 \n");
    for (int a = 0; a < 11; a++) {
        for (int b = 0; b < 3; b++) {
            printf("%3d \t", S_value[a][b]);
        } printf("\n");
    }

    return 0;
}
