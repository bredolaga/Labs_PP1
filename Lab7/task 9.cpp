#include <iostream>
#include <algorithm>

using namespace std;

int f(int arr[], int a) {
    for (int i = 0;i < a / 2;i++) {
        swap(arr[i], arr[a - 1 - i]);
    }
    return 0;
}


int main() {
    int a;
    cin >> a;
    int arrA[a];

    for (int i = 0;i < a;i++) {
        cin >> arrA[i];
    }

   f(arrA, a);

    for (int i = 0;i < a;i++) cout << arrA[i] << " ";
    return 0;
}
