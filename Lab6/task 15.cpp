using namespace std;
#include <iostream>
#include <sstream>

int main() {
    string a;
      getline (cin , a);
    int r[10] ={97,101,105,111,117,65,69,73,79,85};

    for (int i = 0;i < a.size();i++) {
        bool p = true;
        for (int y = 0;y < 10; y++) {
            if (a[i] ==  r[y]) {
                p = false;
            }
        }
        if (p == true) {
            cout << a[i];
        }
    }
    return 0;
}
