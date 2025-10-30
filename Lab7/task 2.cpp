#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double h(int a, int b) {
    long long c = (a * a) + (b * b);
    return sqrt(c);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << setprecision(4) << h(a, b);
    return 0;
}
