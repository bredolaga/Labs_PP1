#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a;
    cin >> b;
    c = a * 0.8;
    if (b > c) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
        return 0;
    }
}
