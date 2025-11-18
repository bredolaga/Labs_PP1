#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int a, b, c; cin >> a;
    vector <pair<long long, int>> vec;
    for (int i = 0 ; i < a;i++) {
        cin >> b >> c;
        vec.push_back({(b + c), (i + 1)});
    }
    sort(vec.begin(), vec.end());

    for (auto x : vec) {
        cout << x.second << " ";
    }
    return 0;
}
