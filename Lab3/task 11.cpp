#include <iostream>
using namespace std;

int main() {
    int a, b;
    b = 2;
    cin >> a;
    for (int i = 0; i < a;i++) {
        if (b == a) {
            cout << "YES";
            return 0;
        }
        b *= 2;
    }
    cout << "NO";
    return 0;
    }
