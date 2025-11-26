#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int bal = 0;
    for (char c : s) {
        if (c == '(') bal++;
        else if (c == ')') bal--;
        if (bal < 0) { 
            cout << "NO";
            return 0;
        }
    }
    if (bal == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
