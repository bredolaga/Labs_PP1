using namespace std;
#include <iostream>

int f(string a) {
    if (a.size() == 1) {
        if (a == "1") cout << "true";
        else cout << "false";
    }
    else cout << a;
    return 0;

}

int main() {
    string a;
    cin >> a;
    f(a);
    return 0;
}
