#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    a = 1;
    long long x;
    cin >> x;
    b = x;

    for (int i = 2; i <= n; i++) {
        cin >> x;
        if (b < x){
            b = x;
            a = i;
        }
    }
    cout << a << endl;
    return 0;
}
