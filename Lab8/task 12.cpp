#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> qwe;
    int a, b, c;
    cin >> a;

    for (int i = 0;i < a;i++) {
        cin >> b;
        c = qwe.size();
        qwe.insert(b);
        if (c < qwe.size()) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
