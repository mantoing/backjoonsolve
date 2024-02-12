#include <iostream>

using namespace std;


#define input_max 1000 + 1

bool map[input_max][input_max];
bool check[input_max];
int n, m, result;


void dfs(int num) {

	check[num] = true;

	for (int i = 1; i <= n; i++) {
		
		if (map[num][i] && !check[i]) { 
			dfs(i);
		}
	}
}

void solution() {

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;
        
		map[a][b] = true;  
		map[b][a] = true;  

	}
	for (int i = 1; i <= n; i++) {

		if (!check[i]) {
			result++;
			dfs(i);
		}
	}
	cout << result << '\n';
}

int main() {
	solution();
	return 0;
}