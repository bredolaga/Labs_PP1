#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    c = 0;
    for (int i = 0;a > i;i++) {
        cin >> b;
        if (b == 0) c++;
         else
            while (b > 0) {
            if (b % 10 == 0) {
                c++;
            }
                b /= 10;

        }
    }
    cout << c;
    return 0;
}
