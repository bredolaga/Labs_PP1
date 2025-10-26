#include <iostream>
#include <cmath>
using namespace std;


int main() {
    long long a, b;
    int c = 0;
    b = 0;
    cin >> a;
    while (a > 0) {
        int d = a % 10;
        b += d * (1ll << c);
        a /= 10;
        c++;
    }
    cout << b;
    return 0;
    }
