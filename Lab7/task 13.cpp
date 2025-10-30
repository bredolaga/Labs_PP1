using namespace std;
#include <iostream>

int f(int a[], int b, int d) {
    if (d + b > 1000) return -1;
    for (int i = 0;i < 1000;i++) {
        if (b == 0 && a[i] == 0) return i;
        else if (b == 0 && a[i] != 0)return i + 1;
        if (a[i] == 0) {
            a[i]++;
            b--;
        }
    }
    return -1;
}

int main() {
    int a[1000] = {0};
    int b, c, d = 0;
    while (cin >> b) {
        if (cin.peek() == '\n') {
            a[b] = 1;
            d ++;
            break;
        }
        a[b] = 1;
        d ++;
    }
    cin >> c;
    cout << f(a, c, d);
}
