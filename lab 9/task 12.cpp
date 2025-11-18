using namespace std;
#include <vector>
#include <iostream>
#include <cctype>

int main() {
    string a;cin >> a;
    for (int i = 0; i < a.size();i++) {
        if (a[i] == a[i + 1] && a[i] == '1') {
            a.erase(i, 2);
            i--;
        }
    }
    cout << a;
    return 0;
}
