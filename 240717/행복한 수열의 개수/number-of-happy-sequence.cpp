#include <iostream>
#include<vector>
using namespace std;

vector<int> v;
vector<vector<int>> grid;


int happy(int location, int num){
    int vertical = 0;
    int horizon = 0;
    for(int i = 1; i<n; i++){
        if(v[i - 1][location] == v[i][location]){
            vertical++;
        }
        else{
            vertical = 0;
        }
        if(v[location][i-1] == v[location][i]){
            horizon++;
        }
        else horizon = 0;
    }

    return vertical + horizon;
}

int main() {
    int n , m;
    cin >> n >> m;

    v.resize(n, 0);
    grid.resize(n, v);

    for(int i = 0; i<n; i++){
        for(int k = 0; k<n; k++){
            cin >> grid[i][j];
        }
    }
    
    for(int i = 0; i<n; i++){

    }

    return 0;
}