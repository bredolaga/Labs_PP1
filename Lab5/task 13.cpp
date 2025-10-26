using namespace std;
#include <iostream>

int main() {
    int a, c;
    cin >> a;
    c = 0;
    int arrA[a][a];

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cin >> arrA[i][r];
        }
    }

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            if (c < arrA[i][r]) {
                c = arrA[i][r];
            }
        }
            for (int f = 0;f < a;f++) {
                arrA[i][f] = c;

        }
        c = 0;
    }

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cout << arrA[i][r] << " ";
        }
        cout << endl;
    }
    return 0;
}
