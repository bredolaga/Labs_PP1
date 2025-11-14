using namespace std;
#include <iostream>
#include <vector>

int main() {
    vector<int> ab;
    int a, b, c, l, r;
    cin >> a;

    for (int i = 0;i < a;i++) {
        cin >> b;
        ab.push_back(b);
    }

    cin >> c;

    for (int i = 0;i < c;i++) {
        cin >> l >> r;
        int qwe = 1;
        int qr = ab[l];
        for (int q = l; q <= r;q++) {
            if (qr < ab[q]){
                qr = ab[q];
                qwe ++;
            }
        }
        cout << qwe << endl;
    }
    return 0;
}
