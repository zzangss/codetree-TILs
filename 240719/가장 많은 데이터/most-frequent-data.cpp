#include <iostream>
#include<unordered_map>
#include<string>

using namespace std;


int main() {
    int n; cin >> n;

    unordered_map<string, int> um;
    int arr[100001] = { 0, };

    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        if (um.find(str) == um.end()) {
            um[str] = i;
            arr[i] = 1;
        }
        else {
            arr[(um.find(str))->second]++;
        }
    }

    int result = 0; 
    for (int i = 0; i < n; i++) {
        result = max(result, arr[i]);
    }

    cout << result;
}