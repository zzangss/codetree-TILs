#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#define MAX 2000000000

using namespace std;

int main() {
    int n, k; cin >> n >> k;

    unordered_map<int, int> umap(n);
    vector<int> v;
    vector<int> check;

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        v.push_back(num);
        if (umap.find(num) != umap.end()) {
            umap[num]++;
        }
        else {
            umap[num] = 1;
        }
    }

    sort(v.begin(), v.end());

    check.push_back(v[0]);
    for (int i = 1; i < v.size(); i++) {
        if (check.back() == v[i]) continue;
        check.push_back(v[i]);
    }

    int s = 0, e = check.size() - 1;
    int cnt = 0;
    while (s <= e) {
        if (check[s] + check[e] > k) {
            e--;
        }
        else if (check[s] + check[e] < k) {
            s++;
        }
        else {
            if (s == e) {
                for (int i = 1; i < umap[check[s]]; i++) {
                    cnt += i;
                }
            }
            else cnt += umap[check[s]] * umap[check[e]];
            s++;
            e--;
        }
    }

    cout << cnt;
    return 0;
}