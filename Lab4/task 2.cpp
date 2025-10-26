#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a;
    for (int i = 0;i < a;i++) {
        cin >> b;
        if (b % 2 == 1) {
            cout << b << " ";
        }
    }
return 0;
}
