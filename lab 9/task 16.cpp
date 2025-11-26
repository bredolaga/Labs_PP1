#include <iostream>
#include <vector>
using namespace std;

int main () {
    int a; cin >> a;
    vector <int> vec;
    for (int i = 0; i < a;i++) {
        int b; cin >> b;
        vec.push_back(b);
    }
    for (int i = 0; i < a; i++) {
        for (int q = i + 1;q < a;q++) {
            if (vec[q] <= vec[i]) {
                vec[i] -= vec[q];
                break;
            }
        }
        cout << vec[i] << " ";
    }

    return 0;
}
