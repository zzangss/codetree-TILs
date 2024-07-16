#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;

    int even = 0, odd = 0;
    bool check = false;

    for(int i = 0; i<n; i++){
        int temp; cin >> temp;
        if(temp == 0) check = true;
        if(!check){
            if(temp % 2 == 0) even++;
            else odd++;
        }
    }

    cout << even << endl << odd;
    return 0;
}