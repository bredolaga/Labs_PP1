#include <iostream>
#include <set>
#include <map>
#include <cctype>
using namespace std;

int main () {
    set <string> names;
    map <string, int> mp;
    string name; int a, b; cin >> a;
    cin.ignore();
    for (int i = 0;i < a;i++) {
        getline(cin,  name);
        names.insert(name);
    }
    for (auto x : names) {
        a = x.find(" ");
        string key = x.substr(0, a);
        mp[key]++;
    }
    for (auto x : mp) {
        if (x.second >= 3) cout << x.first << " " << "+1" << endl;
        else if (x.second < 3) cout << x.first << " " << "NO BONUS" << endl;
    }
    return 0;
}
