using namespace std;
#include <iostream>
#include <sstream>

int main() {
    string a;
    getline (cin , a);
    int b = 96;
    bool p = true;

    for (int i = 0;i < a.size();i++) {
        if (a[i] == b + 1) {
            b = a[i];
        }
        else if (a[i] == b) {
            continue;
        }
        else p = false;
    }

    if (p == true) cout << "YES";
    else cout << "NO";
    return 0;
}
