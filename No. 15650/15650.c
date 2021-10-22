#include <stdio.h>

int Arr[8] = { 0, };

void Back(int N, int M, int d) {
	for (int i = 1,k; i <= N; i++) {
		if (d == 0)	Arr[0] = i;
		else {
			for (k = 0; k < d; k++) {
				if (Arr[k] >= i) break;
			}
			if (k == d) Arr[d] = i;
			else continue;
		}

		if (M - 1 == d) {
			for (int n = 0; n < M; n++)
				printf("%d ", Arr[n]);
			printf("\n");
		}
		else Back(N, M, d + 1);
	}
}
int main() {
	int N, M;
	scanf("%d%d", &N, &M);

	Back(N, M, 0);

	return 0;
}