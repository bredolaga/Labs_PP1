using namespace std;
#include <iostream>

int main() {
    int a;
    cin >> a;
    string arrA[a][a];

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            if (i >= r) {
                arrA[i][r] = "[*]";
            }
            else if (i < r) {
                arrA[i][r] = " ";
            }
        }
    }

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cout << arrA[i][r];
        }
        cout << endl;
    }
    return 0;
}
