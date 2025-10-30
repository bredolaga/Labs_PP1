#include <iostream>
using namespace std;

bool f(int a) {
    while (a > 0) {
        if ((a % 10) % 2 != 0) {
            return false;
        }
        a /= 10;
    }
    return true;
}

int main() {
    int a;
    cin >> a;
    if (f(a) == false) cout << "Not valid";
    else cout << "Valid";
    return 0;
}
