#include<iostream>
#include<vector>
#include<unordered_map>
#define MAX 100000

using namespace std;

int main() {
	int n, k; cin >> n >> k;

	vector<int> v(n);
	unordered_map<int, int> umap;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int result = 0;
	for (int i = n - 1; i >= 0; i--) {
		int temp = k - v[i];
		for (int j = 0; j < i; j++) {
			result += umap[temp - v[j]];
			umap[v[j]]++;
		}
		umap.clear();
	}

	cout << result;
	return 0;
}