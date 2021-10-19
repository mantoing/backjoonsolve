#include <stdio.h>
 
int main() {
    int L, P, V, count;
    for (int t = 1;; t++) {
        scanf("%d %d %d", &L, &P, &V);
        if (!L && !P && !V) break;
 
        count = (V / P) * L;
        V = V % P;
        count += V < L ? V : L;
        printf("Case %d: %d\n", t, count);
    }
    return 0;
}