#include <iostream>
#include <map>
using namespace std;


int main() {
	int N;
	int M;
	string site, pw;
	map <string, string> pw_list;	
	map <string, string> ::iterator it;	

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> site;
		cin >> pw;
		pw_list.insert({ site,pw });
	}

	for (int i = 0; i < M; i++) {
		cin >> site;
		
		it = pw_list.find(site);
		cout << it->second << "\n";
	}

	return 0;
}