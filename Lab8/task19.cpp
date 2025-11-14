#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ep;
    int a, b;string d; cin >> a;

    for (int i = 0;i < a;i++) {
        cin >> d; cin >> b;
        ep[d] += b;
    }

    for (auto x : ep) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
