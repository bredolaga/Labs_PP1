using namespace std;
#include <iostream>

int main() {
    int a, b, d, e;
    cin >> a >> b;
    e = 10000;
    d = 0;
    int arrA[a][b];

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < b;r++) {
            cin >> arrA[i][r];
        }
    }

    int sum = 0;

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < b;r++) {
            sum += arrA[i][r];
        }
        if (sum < e) {
            e = sum;
            d = i;
        }
        sum = 0;
    }
    cout << d + 1;
    return 0;
}
