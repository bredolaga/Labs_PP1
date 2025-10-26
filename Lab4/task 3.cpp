#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a;
    c = 0;
    for (int i = 0;i < a;i++) {
        cin >> b;
        if (b > 0) {
            c++;
        }
    }
    cout << c;
return 0;
}
