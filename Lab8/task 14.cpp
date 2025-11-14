#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    set<int> qwe;
    vector<int> zxc;
    int a,b;
    cin >> a;

    for (int i = 0; i < a;i++) {
        cin >> b;
        zxc.push_back(b);
    }

    for (int i = 0;i < a - 1;i++) {
        int y = zxc[i] + zxc[i + 1];
        qwe.insert(y);
    }

    cout << qwe.size();
    return 0;
}
