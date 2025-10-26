#include <iostream>
using namespace std;

int main() {
    long long a, b;
    b = 0;
    cin >> a;
    int ma = 0;
    int qwe = 0;
    long long arrA[a], arrB[a];
    for (int i = 0; i < a; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < a; i++) {
        ma = 0;
        for (int q = 0; q < a; q++) {
            if (arrA[i] == arrA[q]) {
                ma++;
            }
        }
        if (qwe < ma) {      
            qwe = ma;
            b = 0;     
            arrB[b++] = arrA[i];
            } else if (qwe == ma) {
            bool exists = false;
            for (int r = 0; r < b; r++) {
                if (arrB[r] == arrA[i]) {
                    exists = true;
                    break;
                }
            }
            if (!exists) {
                arrB[b++] = arrA[i];
            }
        }
    }
    for (int i = 0; i < b - 1; i++) {
        for (int j = i + 1; j < b; j++) {
            if (arrB[i] < arrB[j]) {
                long long tmp = arrB[i];
                arrB[i] = arrB[j];
                arrB[j] = tmp;
            }
        }
    }
    for (int i = 0; i < b; i++) {
        cout << arrB[i] << " ";
    }
    return 0;
}
