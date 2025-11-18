#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int a, b; cin >> a;
    int arr[a];
    for (int i = 0;i < a;i++) {
    cin >> arr[i];
    }
    for (int i = 0;i < a;i++) {
        for (int q = 0;q < a;q++) {
            if (arr[i] > arr[q]) swap(arr[i] ,arr[q]);
        }
    }

    for (int i = 0;i < a;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
