using namespace std;
#include <iostream>
#include <cctype>

bool f(string a, int b) {
    int c = 0;
    for (int i = 0;i < a.size();i++) {
        if (isdigit(a[i]) == true) c++;
    }
    if (c >= b) return true;
    else return false;
}

int main() {
    string a;
    int b;
    cin >> a >> b;

    if (!f(a, b)) cout << "NO";
    else cout << "YES";
    return 0;
}
