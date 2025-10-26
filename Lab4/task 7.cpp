#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c;
    d = 0;
    long long arr[a];
    for (int i = 0;i < a;i++) {
        cin >> arr[i];
    }
        if (b == c) {
            cout << arr[b - 1];
            return 0;
        }
    while (b <= c) {
        d += arr[b - 1];
        b++;
    }
    cout << d;
    return 0;
}
