using namespace std;
#include <iostream>

int main() {
    int a,b,c;
    c = 0;
    cin >> a >> b;
    int arrA[a][b];

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < b;r++) {
            cin >> arrA[i][r];
        }
    }
    for (int i = 0;i < a;i++) {
        for (int r = 0;r < b;r++) {
            if (arrA[i][r] < 0) {
                c++;
            }
        }
    }
    cout << c;
    return 0;
}
