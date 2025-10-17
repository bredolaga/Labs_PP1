using namespace std;
#include <iostream>

int main() {
    int a, b;
    cin >> a;
    b = 0;
    int arrA[a][a];

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            arrA[i][r] = 0;
        }
    }

    for (int i = 0;i < a;i++) {
        arrA[0][i] = b;
        arrA[i][0] = b;
        arrA[i][i] = b * b;
        b++;
    }
    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cout << arrA[i][r] << " ";
        }
        cout << endl;
    }
    return 0;
}
