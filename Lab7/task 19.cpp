using namespace std;
#include <iostream>

bool f(string s) {
    int b = s.find(" ");
    string l = s.substr(0, b);
    string r = s.substr(b + 1);
    if (l.size() != r.size()) return false;
    for (int i = 0;i < l.size();i++) {
    l[i] = tolower(l[i]);
    if (l[i] == 'p') l[i] = 'b';
    if (l[i] == 'e') l[i] = 'i';
        }
    for (int i = 0;i < r.size();i++) {
        r[i] = tolower(r[i]);
        if (r[i] == 'p') r[i] = 'b';
        if (r[i] == 'e') r[i] = 'i';
    }
    for (int i = 0;i < l.size();i++) {
        if (l[i] != r[i]) return false;
    }
    return true;
}

int main() {
    int a;
    string b;
    cin >> a;
    cin.ignore();

    for (int i = 0; i < a;i++) {
        getline(cin, b);
            if (!f(b)) cout << "No" << endl;
            else cout << "Yes" << endl;
    }
    return 0;
}
