#include <iostream>
#include<unordered_map>

using namespace std;


int main() {
    int n, m; cin >> n >> m;

    unordered_map<int, int> um;

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (um.find(num) == um.end()) {
            um[num] = 1;
        }
        else {
            um[num]++;
        }
    }

    for (int i = 0; i < m; i++) {
        int num; cin >> num;
        if (um.find(num) == um.end()) cout << 0 << " ";
        else cout << (um.find(num))->second << " ";
    }
}