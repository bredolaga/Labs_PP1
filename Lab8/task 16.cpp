#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> qwe;
    int a, b ,fmin, smin = 100000, score = 0;
    cin >> a;

    for (int i = 0; i < a;i++) {
        cin >> b;
        if (i == 0) fmin = b;
        if (smin > b && fmin < b ) smin = b;
            if (fmin > b) {
            fmin = b;
        }
        qwe.push_back(b);
    }

    for (int i = 0; i < qwe.size();i++) {
        if (qwe[i] == smin) score++;
    }
    cout << score;
    return 0;
}
