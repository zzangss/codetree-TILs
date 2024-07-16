#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b; cin >> a >> b;


    for(int i = 1; i<=9; i++){
        if(a < b){
           for(int k = a; k<=b; k++){
            cout << k << " * " <<  i << " = " << k*i << "  ";
            }
            cout << endl; 
        }
        else{
            for(int k = b; k >= a; k--){
                cout << k << " * " <<  i << " = " << k*i << " ";
            }
            cout << endl; 
        }
        
    }
    return 0;
}