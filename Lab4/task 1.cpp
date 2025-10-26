#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a;
    c = 0;
    for (int i = 0;i < a;i++) {
        cin >> b;
        c += b;
    }
    cout << c;
return 0;
}
