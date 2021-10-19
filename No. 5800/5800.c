#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int T, N, temp;

	scanf("%d", &T);

	for (int T = 0; T < T; T++)
	{
		scanf("%d", &N);

		int* A = (int*)malloc(sizeof(int) * N);

		for (int i = 0; i < N; i++)
			scanf("%d", &A[i]);
		
		for(int j = 1; j < N; j++)
			for (int i = 0; i < N - j; i++)
			{
				if (A[i] > A[i + 1])
				{
					temp = A[i];
					A[i] = A[i + 1];
					A[i + 1] = temp;
				}
			}

		temp = 0;

		for (int i = 0; i < N - 1; i++)
		{
			if (temp < A[i + 1] - A[i])
				temp = A[i + 1] - A[i];
		}

		printf("Class %d\nMax %d, Min %d, Largest gap %d\n", T + 1, A[N - 1], A[0], temp);

		free(A);
	}
}