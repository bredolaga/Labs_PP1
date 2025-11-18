using namespace std;
#include <map>
#include <iostream>
#include <cstdio>

int main() {
    map <string, pair<double, double>> mp;
    int a, b; cin >> a; string name;
    for (int i = 0; i < a;i++) {
        cin >> name >> b;
        mp[name].first += b; mp[name].second++;
    }
    for (auto x : mp) {
        double sd = (x.second.first / x.second.second);
        cout << x.first << ": ";
        printf("%.3f", sd);
        cout << endl;
    }
    return 0;
}
