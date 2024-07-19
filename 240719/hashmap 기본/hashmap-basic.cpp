#include <iostream>
#include<unordered_map>

using namespace std;


int main() {
    int n; cin >> n;

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++) {
        string order; cin >> order;
        int a, b;

        if (order == "add") {
            cin >> a >> b;
            m[a] = b;
        }
        else if (order == "find") {
            cin >> a;
            if (m.find(a) == m.end()) cout << "None" << endl;
            else cout << (m.find(a))->second << endl;
        }
        else if (order == "remove") {
            cin >> a;
            m.erase(a);
        }
    }
}