#include <iostream>
using namespace std;

bool f(int a) {
    while (a % 2 == 0) a /= 2;
    while (a % 3 == 0) a /= 3;
    while (a % 5 == 0) a /= 5;

    return a == 1;
}

int main() {
    int a;
    cin >> a;
    if (f(a) == true) cout << "Yes";
    else cout << "No";
    return 0;
}
