#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> numbers;
    int a, freq = 0; cin >> a; string b;

    while (--a >= 0) {
        cin >> b;
        numbers[b] ++;
    }

    for (auto &x : numbers) {
        if (x.second == 3) freq++;
    }

    cout  << freq;
    return 0;
}
