#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    c = 0;
    b = a;
    for (;b > 0;) {
        if (b % 2 == 1) {
            c += 1;
        }
        b /= 2;
    }
    cout << c;
    return 0;
}
