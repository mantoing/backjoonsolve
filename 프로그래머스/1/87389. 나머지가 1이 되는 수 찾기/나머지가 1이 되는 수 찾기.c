#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = -1;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 1){
            answer = i;
            break;
        }
            
    }
    printf("%d", answer);
    return answer;
}