#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> qwe(a);

    for (int i = 0; i < a; i++) cin >> qwe[i];

    sort(qwe.begin(), qwe.end());

    int currentCount = 1, maxCount = 1;
    int mostFrequent = qwe[0];

    for (int i = 1; i < a; i++) {
        if (qwe[i] == qwe[i - 1]) currentCount++;
        else currentCount = 1;

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequent = qwe[i];
        }
    }

    cout << mostFrequent;
    return 0;
}
