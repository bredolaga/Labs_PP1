#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, result = 0; cin >> a;
    vector <int> time(1440, 0);
    for (int i = 0;i < a;i++) {
        int q, w, e, r;
        cin >> q >> w >> e >> r;
        int st = q * 60 + w;
        int end = e * 60 + r;

        if (st < end) {
            for (int q = st;q < end;q++) time[q]++;
        }
        else if (end < st) {
            for (int n = st;n < 1440;n++) time[n]++;
            for (int m = 0;m < end;m++) time[m]++;
        }

        else {
            for (int u = 0;u < 1440;u++) time[u]++;
        }
    }

    for (int i = 0;i < 1440;i++) {
        if (time[i] == a) result++;
    }

    cout << result;
    return 0;
}
