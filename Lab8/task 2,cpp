using namespace std;
#include <iostream>
#include <vector>

int main() {
    vector <int> a;
    int b, d = 0,e = 10000000;
    while (cin >> b) {
        if (cin.peek() == '\n') {
            if (d < b) d = b;
            if (e > b) e = b;
            a.push_back(b);
            break;
        }
        if (d < b) d = b;
        if (e > b) e = b;
        a.push_back(b);
    }

    for (int i = 0;i < a.size();i++) {
        if (a[i] == e) a[i] = d;
        cout << a[i] << " ";
    }
    return 0;
}
