#include <stdio.h>

int main(){
    int N, M;
    int sum, res = 0;
    int arr[100] = { 0, };

    scanf("%d %d", &N, &M);

    for(int i=0; i <N; i++)
        scanf("%d", &arr[i]);

    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            for (int k=j+1; k<N; k++){
                sum = arr[i] + arr[j] + arr[k];
                if (sum > res && sum <= M)
                    res = sum;
            }
        }
    }
    printf("%d", res);
    return 0;    
}