using namespace std;
#include <iostream>
#include <vector>

int main() {
    int a, b = 0, e;
    cin >> a;
    vector<int> c;

        for (int i = 0; i < a;i++) {
            cin >> e;
            c.push_back(e);
        }

        for (int i = 0; i < c.size();i++) {
            for (int q = 0;q < c.size();q++) {
                if (c[q] == b) b++;
            }
        }
    cout << b;
    return 0;
}
