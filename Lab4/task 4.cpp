#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a;
    cin >> b;
    c = b;
    for (int i = 1;i < a;i++) {
        cin >> b;
        if (b > c) {
            c = b;
        }
    }
    cout << c;
return 0;
}
