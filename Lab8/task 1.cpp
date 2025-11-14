using namespace std;
#include <iostream>
#include <vector>

int main() {
    vector <int> a;
    int b, c = 0;
    while (cin >> b) {
        if (cin.peek() == '\n') {
            a.push_back(b);
            break;
        }
        a.push_back(b);
    }
    for (int i = 0;i < a.size();i++) c += a[i];
    cout << c;
    return 0;
}
