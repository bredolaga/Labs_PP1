#include <iostream>
using namespace std;
string toHex(int a) {
    string hex = "0123456789ABCDEF";
    string res = "";
    while (a > 0) {
        int ram = a % 16;
        res = hex[ram] + res;
        a /= 16;
    }
    return res;
}

int main () {
    int a;
    cin >> a;
    cout << toHex(a);
    return 0;
}
