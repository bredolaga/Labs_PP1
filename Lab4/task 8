#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a;
    long long arr[a];
    for (int i = 0;i < a;i++) {
        cin >> arr[i];
    }
    for (int i = 0;i < a - 1;i++) {
        for (int i = 0;i < a - 1;i++) {
            if (arr[i] < arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    for (int i = 0;i < a; i ++) {
        cout << arr[i]<< " ";
    }
    return 0;
}
