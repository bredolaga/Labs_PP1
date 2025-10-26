using namespace std;
#include <iostream>
#include <sstream>

int main() {
    string a;
    getline (cin , a);
    char r[54] ={'q','w','e','r','t','y','u','i','o','p',
        'a','s','d','f','g','h','j','k','l',
        'z','x','c','v','b','n','m',
        'Q','W','E','R','T','Y','U','I','O','P',
        'A','S','D','F','G','H','J','K','L',
        'Z','X','C','V','B','N','M'};
    istringstream as(a);
    string b;

    while (as >> b) {
        bool k = true;
        for (int i = 0;i < b.size();i++) {
            bool f = false;
            for (int u = 0;u < 54;u++) {
                if (b[i] == r[u]) {
                    f = true;
                    break;
                }
            }
            if (!f) {
                k = false;
                break;
            }
        }
        if (k == true) cout << b << endl;
    }

    return 0;
}
