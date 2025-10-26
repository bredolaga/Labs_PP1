using namespace std;
#include <iostream>
#include <sstream>

int main() {
    string a;
    cin >> a;
    bool c = true;

    for (int i = 0;i < a.size();i++) {
       if ( a[i] != a[a.size() - i - 1]) c = false;
    }
    if (c == true) cout << "YES";
    else cout << "NO";
    return 0;
}
