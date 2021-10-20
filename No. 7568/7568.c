#include <stdio.h>

int main()
{
    int N;
    int sum;
    int x[49] = { 0, };
    int y[49] = { 0 ,};

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    for (int i=0; i < N; i++){
        sum = 0;
        for (int j=0; j<N; j++){
            if (x[i] < x[j] && y[i] < y[j])
                sum++;
        }
        printf("%d ", sum + 1);
    }
    return 0;
}