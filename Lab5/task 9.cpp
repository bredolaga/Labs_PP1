using namespace std;
#include <iostream>

int main() {
    int a;
    cin >> a;
    string arrA[a][a];

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cin >> arrA[i][r];
        }
    }
    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            if (arrA[i][r] != arrA[r][i]) {
                cout << "Not perfect.";
                return 0;
            }
        }
    }
    cout << "Perfect.";
    return 0;
}
