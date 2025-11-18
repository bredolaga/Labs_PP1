#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main () {
    int a;cin >> a;string b;
    map <string, int> mp;
    for (int i = 0;i < a;i++) {
        cin >> b;
        if (mp[b] == 0) {
            mp[b] = 1;
            cout << "new user added" << endl;
        }
        else cout <<"user already exists" << endl;
    }
    return 0;
}
