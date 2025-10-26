using namespace std;
#include <iostream>
#include <sstream>

int main() {
    int w, c = 0;
    string a , b;
    cin >> a >> b;
    w = a.size();

    for (int i = 0;i < b.size();i++) {
        int e = i;
        c++;
        if (e >= w) e %= w;
        if (a[e] != b[i]) {
            cout << "NO";
            return 0;
        }
    }
    if (c % w != 0) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
