using namespace std;
#include <iostream>

int main() {
    int a, b;
    b = 1;
    cin >> a;
    int arrA[a][a];

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            arrA[i][r] = b;
        }
        b += 2;
    }
    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cout << arrA[i][r] << " ";
        }
        cout << endl;
    }
    return 0;
}
