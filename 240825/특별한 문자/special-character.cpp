#include <iostream>
#include<map>

using namespace std;

int main() {
    string str; cin >> str;

    map<char,int> m;

    for(int i = 0; i<str.size(); i++){
        m[str[i]]++;
    }

    for(auto i = m.begin(); i != m.end(); i++){
        if(i -> second == 1) {
            cout << i-> first;
            return 0;
        }

    }
}