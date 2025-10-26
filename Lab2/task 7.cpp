#include <iostream>
using namespace std;

int main () {
    int a, b, c, d, e;
    cin >> a;
    b = (a / 100) % 10; //2
    c = (a / 10) % 10; //3
    d = a % 10; //4
    e = a / 1000; // 1
    if (e == d && c == b) {
        cout << "YES" <<  endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
