using namespace std;
#include <iostream>

int main() {
    int a,b,c,d;
    cin >> a;
    int arrA[a][a];
    c = 0;
    b = 0;

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cin >> arrA[i][r];
        }
    }
    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            if (arrA[i][r] > c) {
                c = arrA[i][r];

            }
        }
    }

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            if (arrA[i][r] < b && c != arrA[i][r]) {
                b = arrA[i][r];
            }
        }
    }

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            if (arrA[i][r] < c && arrA[i][r] > b) {
                b = arrA[i][r];
            }
        }
    }
    cout << b;
    return 0;
}
