#include <iostream>
#include <map>
using namespace std;

int main() {
    int a = 0, b, c;
    cin >> a;
    map<int, int> map;

    for (int i = 0;i < a;i++) {
        cin >> b;
        if (i == 0) c = b;
        map.insert({i,b});
    }

    for (int i = 0;i < a;i++) {
        if (c > map[i]) c = map[i];
    }
    cout << c;
    return 0;
}
