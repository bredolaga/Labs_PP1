#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long arr[a];
    for (int i = 0;i < a;i++) {
        cin >> arr[i];
    }
    for (;b < c;) {
        swap(arr[b - 1], arr[c - 1]);
        b++;
        c--;
        }
    for (int i = 0;i < a; i ++) {
        cout << arr[i]<< " ";
    }
    return 0;
}
