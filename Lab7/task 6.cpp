#include <iostream>
using namespace std;

bool f(int a) {
    int sum, b = a;
    while (b > 0) {
        sum += b %  10;
        b /= 10;
    }
    return sum % (a % 10) == 0;
}

int main() {
    int a;
    cin >> a;
    if (f(a) == true) cout << "Yes";
    else cout << "No";
    return 0;
}
