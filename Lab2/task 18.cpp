#include <iostream>
using namespace std;

int main() {
int n;
    cin >> n;

 int x;
    cin >> x;
    int max_val = x;

for (int i = 1; i <= n; i++) {
    cin >> x;
    if (x > max_val) {
        max_val = x;
    }
}
    cout << max_val << endl;
    return 0;
}
