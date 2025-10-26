#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a;
    cin >> b;
    d = 1;
    c = b;
    e = 1;
    for (int i = 1;i < a;i++) {
        cin >> b;
        d ++;
        if (b >= c) {
            c = b;
            e = d;
        }
    }
    cout << e;
return 0;
}
