using namespace std;
#include <iostream>
#include <sstream>

int main() {
    int a = 0, b = 0, e = 0;
    string c;
    char n;
    cin >> c >> n;

    for (int i = 0;i < c.size();i++) {
        if (e == 0 && c[i] == n) {
            a = i;
            e++;
        }
        else if (e != 0 && c[i] == n) b = i;
        else continue;
    }

    if (b != 0) cout << a << " " << b;
    else cout << a;
    return 0;
}
