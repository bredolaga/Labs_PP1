using namespace std;
#include <iostream>

int main() {
    int a, b;
    cin >> a >> b;
    string  arrA[8][8];

    if (a > 8 || b > 8) {
        cout << "Impossible";
        return 0;
    }

    for (int i = 0;i < 8;i++) {
        for (int q = 0;q < 8;q++) {
            arrA[i][q] = "*";
        }
    }

    int ax[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int ay[8] = {0, -1, -1, -1, 0, 1, 1, 1};
    arrA[a][b] = "1";
    int m = 0;

    for (int i = 0;i < 8;i++) {
        int x = a + ax[m];
        int y = b + ay[m];
        while(x >= 0 && x < 8 && y >= 0 && y < 8 && arrA[x][y] == "*") {
            arrA[x][y] = "2";
            x = x + ax[m];
            y = y + ay[m];
        }
        m++;
    }

    for (int i = 0;i < 8;i++) {
        for (int q = 0;q < 8;q++) {
            cout << arrA[i][q] << " ";
        }
        cout << endl;
    }
    return 0;
}
