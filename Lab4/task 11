#include <iostream>
using namespace std;

int main() {
    int z = 0;
    int x = 0;
    long long a;
    cin >> a;
    long long arrA[a];
    for (int i = 0;i < a;i++) {
        cin >> arrA[i];
    }
    long long b;
    cin >> b;
    long long arrB[b];
    for (int i = 0;i < b;i++) {
        cin >> arrB[i];
    }
    while (a > z && b > x) {
        if(arrA[z] > arrB[x]) {
            cout << arrB[x] << " ";
            x++;
        }
        else if(arrA[z] < arrB[x]) {
            cout << arrA[z] << " ";
            z++;
        }
        else if (arrA[z] == arrB[x]) {
            cout << arrA[z] << " " << arrB[x] << " ";
            z++;
            x++;
        }
    }
    while (a > z) {
        cout << arrA[z] << " ";
    z++;
}
    while (b > x) {
        cout << arrB[x] << " ";
    x++;
}
    return 0;
}
