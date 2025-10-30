#include <iostream>
#include <cmath>
using namespace std;

double f(int a) {
    return abs(a);
}

int main() {
    int a;
    cin >> a;
    cout << f(a);
    return 0;
}
