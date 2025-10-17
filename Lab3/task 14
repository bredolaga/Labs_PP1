#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        int c = s[i] - '0';
        if ((i + 1) % 2 == 0)
            sum1 += c;
        else
            sum2 += c;
    }

    cout << sum1 - sum2;
    return 0;
}
