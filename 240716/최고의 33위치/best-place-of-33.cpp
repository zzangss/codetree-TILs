#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n; 
vector<int> v;
vector<vector<int>> grid;

int countNum(int row_s, int row_e, int col_s, int col_e){
    int num = 0;

    for(int row = row_s; row<= row_e; row++){
        for(int col = col_s; col<=col_e; col++){
        num += grid[row][col];
    }
    }
    
    return num;
}

int main() {
    cin >> n;

    v.resize(n);
    grid.resize(n, v);

    for(int i = 0; i<n; i++){
        for(int k = 0; k<n; k++){
            cin >> grid[i][k];
        }
    }

    int max_num = 0;
    for(int i = 0; i<n; i++){
        for(int k = 0; k <n; k++){
            if(k+2 >=n) continue;
            if(i+2 >= n) continue;
            max_num = max(max_num, countNum(i, i+2, k, k+2));
        }
    }
    cout << max_num;
    return 0;
}