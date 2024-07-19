#include <iostream>
#include<unordered_map>
#include<string>

using namespace std;


int main() {
    int n, m; cin >> n >> m;

    unordered_map<string, string> sToi;
    unordered_map<string, string> iTos;

    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        sToi[str] = to_string(i + 1);
        iTos[to_string(i + 1)] = str;
    }

    for (int i = 0; i < m; i++) {
        string str; cin >> str;
        if (sToi.find(str) != sToi.end()) {
            cout << (sToi.find(str))->second << endl;
        }
        else {
            cout << (iTos.find(str))->second << endl;
        }
    }
}