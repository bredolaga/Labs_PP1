#include <iostream>
using namespace std;

int main() {
    long long a;
    cin >> a;
    long long arr[a];
    for (int i = 0;i < a;i++) {
        cin >> arr[i];
    }
    for (long long v = 0;v < a;v++) {
        for (long long i = v + 1; i < a; ) {
            if (arr[v] == arr[i]) {
                for (long long k = i; k < a - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                a--;
            } else {
                i++;
            }
        }
    }
    for (long long i = 0;i < a; i ++) {
        cout << arr[i]<< " ";
    }
    return 0;
}
