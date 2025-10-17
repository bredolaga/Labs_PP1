using namespace std;
#include <iostream>

int main() {
    int a,b,c,d,e;
    cin >> a;
    int arrA[a][a];
    c = 1;
    b = 1;

    for (int i = 0;i < a;i++) {
        for (int r = 0;r < a;r++) {
            cin >> arrA[i][r];
        }
    }
    e = arrA[0][0];

    for (int i = 1;i < a;i++) {
            if (e < arrA[i][i]) {
                e = arrA[i][i];
                c = (i + 1);
                b = (i + 1);
            }
        }
    cout << "Maximum element is: " << e << " " << "with coordinates:" << " " << c << ";" << b;
    return 0;
}
