#include <stdio.h>

int flag_a[8];     //각행에 퀸을 배치했는지 체크하는 배열
int flag_b[15];    //대각선 /에 퀸을 배치했는지 체크하는 배열
int flag_c[15];    //대각선 \에 퀸을 배치했는지 체크하는 배열
int pos[8];        // 각 열에서 퀸의 위치

int set(int i)
{
    int sum;
    int j;
    for (j = 0; j < 8; j++){
        if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7]) {
            pos[i] = j;
            if (i == 7)
                break;
            else {
                flag_a[j] = flag_b[i + j] = flag_c[i - j +7] = 1;
                set(i + j);
                sum ++
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 0;
            }    
        }
    }
    return sum;
}

int main(void)
{
    int i;
    for (i = 0; i < 8; i++)
    flag_a[i] = 0;
    for (i=0; i < 15; i++)
    flag_b[i] = flag_c[i] = 0;
    printf("%d", set(0));

    return 0;
}