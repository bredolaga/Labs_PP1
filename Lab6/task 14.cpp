using namespace std;
#include <iostream>
#include <sstream>

int main() {
    string a;
    char b, z;
    int c = 0, e, x = 0;
    cin >> a;

    for (int i = 0;i < a.size();i++) {
        if (a[i] != b) {
            b = a[i];
            c = 0;
        }
        if (b == a[i]) {
            c++;
        }
        if (x < c) {
            x = c;
            z = a[i];
        }
    }
    cout << z << " " << x;
    return 0;
}
