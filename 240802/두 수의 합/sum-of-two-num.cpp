#include<iostream>
#include<unordered_map>
#define MAX 100000

using namespace std;

int main() {
	int n, k; cin >> n >> k;

	int arr[MAX];
	unordered_map<int, int> umap;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int result = 0;

	for (int i = 0; i < n; i++) {
		int temp = k - arr[i];
		result += umap[temp];

		umap[arr[i]]++;
	}

	cout << result;
	return 0;
}