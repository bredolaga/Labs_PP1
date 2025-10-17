using namespace std;
#include <iostream>

int main() {
    int a;
    cin >> a;
    int  arrA[a][a];

    for (int i = 0;i < a;i++) {
        for (int q = 0;q < a;q++) {
            arrA[i][q] = 0;
        }
    }

    int ax[4] = {0, 1, 0, -1};
    int ay[4] = {1, 0, -1, 0};

    int r = 0;
    int x = 0, y = 0;

    for (int i =  1;i < ((a * a) + 1);i++) {
        arrA[x][y] = i;
        int bx = x + ax[r];
        int by = y + ay[r];
        if (bx < 0 || bx >= a || by < 0 || by >= a || arrA[bx][by] != 0) {
            r = (r + 1) % 4;
            bx = x + ax[r];
            by = y + ay[r];
        }
        x = bx;
        y = by;
    }

    for (int i = 0;i < a;i++) {
        for (int q = 0;q < a;q++) {
            cout << arrA[i][q] << " ";
        }
        cout << endl;
    }
    return 0;
}
