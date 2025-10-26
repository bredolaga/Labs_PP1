using namespace std;
#include <iostream>

int main() {
    int a, b, c, d = 0;
    cin >> a >> b >> c;
    int arrA[a][b];

    for (int i = 0; i < a; i++) {
        for (int q = 0; q < b; q++) {
            arrA[i][q] = 0;
        }
    }

    for (int i = 0; i < c; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int z = x1; z < x2; z++) {
            for (int j = y1; j < y2; j++) {
                if (!arrA[z][j]) {
                    arrA[z][j] = 1;
                    d++;
                }
            }
        }
    }

    cout << a * b - d;
    return 0;
}
