#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> cont;
    int a;string b; cin >> a;

    for (int i = 0;i < a;i++) {
        cin >> b;
        if (cont.find(b) == cont.end()){
            cont[b] = i;
        }
    }

    for (auto &x : cont) {
        cout << x.first <<" "<< x.second + 1 << endl;
    }
    return 0;
}
