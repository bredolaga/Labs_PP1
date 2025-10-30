using namespace std;
#include <iostream>

bool f(string a, int b) {
    int n = 0;

    for (int i = 0; i < a.size(); i++){
        if (isdigit(a[i])) {
            n++;
            if (n >= b) {
                return true;
                break;
            }
        }
        else n = 0;

    }
    return false;
}

int main() {
    string a;
    int b;
    cin >> a >> b;
    if (!f(a, b)) cout << "Not valid";
    else cout << "Valid";
    return 0;
}
