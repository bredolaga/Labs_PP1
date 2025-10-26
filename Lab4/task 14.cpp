#include <iostream>
using namespace std;

int main() {
    long long a;
    cin >> a;
    long long arrA[a];
    for (int i = 0;i < a;i++) {
        cin >> arrA[i];
    }
    for (int i = 0;i < a;i++) {
        cout << arrA[i] * arrA[i] << " ";
    }
    return 0;
}
