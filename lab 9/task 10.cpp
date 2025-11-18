using namespace std;
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    map <string, double> mp;  vector <pair<double , string>> vec;
    int a, b, count = 0; cin >> a; string name;
    for (int i = 0; i < a;i++) {
        cin >> name >> b;
        count += b;
        mp[name] += b;
    }
    for (auto x : mp) {
        double q = x.second / count * 100;
        vec.push_back({q, x.first});
    }
    sort(vec.rbegin(), vec.rend());
    for (auto s : vec) {
        cout << s.second << " " << s.first << "%" << endl;
    }
    return 0;
}
