using namespace std;
#include <iostream>

int main() {
    int a, b, c;
    cin >> a >> b;
    c = 0;
    int arrA[a][b];

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < b;r++) {
            cin >> arrA[i][r];
        }
    }


    for (int i = 0;i < a;i++) {
        for (int r = 0;r < b;r++) {
            for (int n = 0;n < arrA[i][r];n++) {
            if (n * n == arrA[i][r]) {
                arrA[i][r] = n;
            }
            }
        }
    }

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < b;r++) {
            cout << arrA[i][r] << " ";
        }
        cout << endl;
    }
    return 0;
}
