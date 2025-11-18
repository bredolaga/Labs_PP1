using namespace std;
#include <map>
#include <iostream>
#include <algorithm>

int main() {
    map <string, double> mp;
    int a, b, d,  count = 0; string name;cin >> d;
    while (--d >= 0) {
        cin >> a;
        while (--a >= 0) {
            cin >> name >> b; count += b;
            mp[name] += b;
        }
    }
    for (auto x : mp) {
        cout << x.first << " " << (x.second / count * 100) << endl;
    }
    return 0;
}
