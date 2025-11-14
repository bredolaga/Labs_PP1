using namespace std;
#include <iostream>
#include <vector>

int main() {
    vector <int> a;
    int b;
    while (cin >> b) {
        if (b == 0) break;
        a.push_back(b);
    }

    for (int i = 0;i < a.size() - (a.size() / 2);i++) {
        if (i == (a.size() - i - 1)) cout << a[i] << " ";
        else cout << a[i] + a[a.size() - i - 1] << " ";
    }
    return 0;
}
