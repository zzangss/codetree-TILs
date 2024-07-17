#include <iostream>
#include<vector>
using namespace std;

vector<int> v;
vector<vector<int>> grid;
int n, m;

int happy(int location) {
    int vertical = 1;
    int horizon = 1;
    int result = 0;
    for (int i = 1; i < n; i++) {
        if (grid[i - 1][location] == grid[i][location]) {
            vertical++;
        }
        else vertical = 1;
        if (vertical >= m) {
            result++;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        if (grid[location][i - 1] == grid[location][i]) {
            horizon++;
        }
        else horizon = 1;
        if (horizon >= m) {
            result++;
            break;
        }
    }

    return result;
}

int main() {
    
    cin >> n >> m;

    if (n == 1) {
        if (m == 1) {
            cout << 1;
            return 0;
        }
        else {
            cout << 0;
            return 0;
        }
    }

    v.resize(n, 0);
    grid.resize(n, v);

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            cin >> grid[i][k];
        }
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        result += happy(i);
    }

    cout << result;
    return 0;
}