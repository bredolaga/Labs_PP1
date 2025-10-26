#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long x,long long y) {
    while (y != 0) {
        long long t = y;
        y = x % y;
        x = t;
    }
    return x;
}

int main() {
    long long a;
    cin >> a;
    long long arrA[a];
    for (int i = 0;i < a;i++) {
        cin >> arrA[i];
    }
    for (int i = 0;i < a - 1;i++) {
        for (int r = 0;r < a - 1;r++) {
            if (arrA[r] < arrA[r + 1]) {
                swap(arrA[r], arrA[r + 1]);
            }
        }
    }
    int c = 0;
    for (int i = 0;i < a;i++) {
        int b = a - 1;
        for (;b >= 0;b--) {
            if (i != b){
                int g = gcd(arrA[i], arrA[b]);
                if (g > c)
                    c = g;
            }
        }
    }
    cout << c;
}
