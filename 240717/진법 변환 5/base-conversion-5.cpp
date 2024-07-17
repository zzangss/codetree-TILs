#include <iostream>
#include <string>
using namespace std;

string func(int num, int k) {
    char temp;
    if (num < k) {
        return to_string(num);
    }
    if (num % k >= 10) {
        temp = 'a' + num % k - 10;
        return func(num / k, k) + temp;
    }
    else {
        return func(num / k, k) + to_string(num % k);
    }
    

}

int main() {
    int n, k;
    cin >> n >> k;

    cout << func(n, k);

    return 0;
}