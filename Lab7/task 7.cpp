#include <iostream>
using namespace std;

float f(float a, float b) {
   return (b / a) * 100;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}
