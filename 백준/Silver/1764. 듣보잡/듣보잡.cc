#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
    
    int N, M; cin >> N >> M;
    string str1 = "";
    unordered_map<string, int> m;
    vector<string> v;
    for(int i = 0; i<N; i++){
        cin >> str1;
        m[str1] = 0;
    }
    string str2 = "";
    for(int i = 0; i<M; i++){
        cin >> str2;
        if(m.find(str2)!=m.end()){
            v.push_back(str2);
        }
    }
    
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
    
    return 0;
}