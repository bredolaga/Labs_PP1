#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> qwe;
    int a;
    string b;
    cin >> a;

    for (int i = 0;i < a;i++) {
        cin >> b;
        qwe.insert(b);
    }

    cout << qwe.size();
    return 0;
}
