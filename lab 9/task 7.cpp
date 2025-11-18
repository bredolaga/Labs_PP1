#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main () {
    map <string, string> mp;
    string log, pas; int a, b; cin >> a;
    for (int i = 0;i < a;i++) {
        cin >> log >> pas;
        mp[log] = pas;
    }
    cin >> b;
    for (int i = 0;i < b;i++) {
        cin >> log >> pas;
        if (mp[log] == pas) cout << "correct password" << endl;
        else if (mp[log] == "") cout << "login error" << endl;
        else cout << "password error" << endl;
    }
    return 0;
}
