#include <iostream>
#include<map>
#include<vector>

using namespace std;

int main() {
    string str; cin >> str;

    map<char,int> m;
    vector<char> v;

    for(int i = 0; i<str.size(); i++){
        m[str[i]]++;
        if(m[str[i]] == 1){
            v.push_back(str[i]);
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(m[v[i]] == 1) {
            cout << v[i];
            return 0;
        }

    }
}