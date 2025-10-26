#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b + c >= 70 && a + b >= 30 && c>= 20) {
        cout << "YES!" << endl;
    }
    else {
        cout << "NO." << endl;
    }
    return 0;
}
