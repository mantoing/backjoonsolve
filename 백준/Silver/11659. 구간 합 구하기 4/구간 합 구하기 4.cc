#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>

using namespace std;

int memo[100001] = { 0 };

int main(){
	int N;
	int M;

	cin >> N >> M;
	for (int i = 1; i < N+1; i++) {
		scanf("%d", &memo[i]);
		memo[i] += memo[i-1];
	}


	int a = 0;
	int b = 0;

	for (int i = 0; i < M;i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", memo[b] - memo[a - 1]);
	}

}