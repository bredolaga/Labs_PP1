#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int w = 0;    
    int b = -1;      
    long long s = -1;

    for (int i = 0; i < n; i++) {
        long long q = 0;
        int p = -1;     

        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            q += x;
            if (x > p) p = x;
        }

        if (p > b || (p == b && q > s) || (p == b && q == s && i < w)) {
            w = i;
            b = p;
            s = q;
        }
    }

    cout << w;
    return 0;
}
