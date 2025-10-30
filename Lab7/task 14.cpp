using namespace std;
#include <iostream>

int main() {
    int a, b;
    cin >> a >> b;
    int arrA[a][b];
    int arrB[b][a];

    for (int i = 0;i < a;i++) {
        for (int q = 0; q < b;q++) {
            cin >> arrA[i][q];
        }
    }

    for (int i = 0;i < a;i++) {
        for (int q = 0;q < b;q++) {
            arrB[q][i] = arrA[i][q];
        }
    }

    for (int i = 0;i < b;i++) {
        for (int q = 0; q < a;q++) {
            cout << arrB[i][q] << " ";
        }
        cout << endl;
    }
    return 0;
}
