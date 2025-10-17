using namespace std;
#include <iostream>

int main() {
    int a,c,d,e;
    cin >> a;
    int arrA[a][a];
    d = 0;
    e = 0;

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cin >> arrA[i][r];
        }
        c = arrA[0][0];
    }
    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            if (arrA[i][r] > c) {
                c = arrA[i][r];
                d = i;
                e = r;
            }
        }
    }
    cout << d + 1 << " " << e + 1;
    return 0;
}
