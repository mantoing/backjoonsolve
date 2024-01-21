#include <iostream>
using namespace std;

int main() {
	int N, K;
	int A[10];

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int count = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (A[i] <= K) {
			count = count + K / A[i];
			K = K % A[i];
		}
		if (K == 0)
			break;
	}

	cout << count << endl;

	return 0;
}