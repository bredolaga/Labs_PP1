#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arrA[a][b];

    for (int i = 0;i < a;i++) {
        for (int q = 0;q < b;q++) {
            cin >> arrA[i][q];
        }
    }

    cout << "coordinates of min elements:" << endl;

    int e = 0;

    for (int i = 0;i < b;i++) {
        int c = 100000000;
        int x = -1, y = -1;

        for (int q = 0;q < a;q++) {
            if (arrA[q][i] < c) {
                c = arrA[q][i];
                x = q;
                y = i;
            }
        }
        cout << x+1 << ";" << y+1 << endl;
        e += c;
    }

    cout << endl;
    cout << "Their sum:" << endl;
    cout << e;
    return 0;
}
