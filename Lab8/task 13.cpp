#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int a, t = 0;
    cin >> a;
    string b;
    bool z, x, c;
     set<string> used;
     vector <string> qwe;

    for (int i = 0;i < a;i++) {
        cin >> b;
        z = false;
        x = false;
        c = false;
        for (int q = 0;q < b.size();q++) {
            if (isupper(b[q])) z = true;
            if (islower(b[q])) x = true;
            if (isdigit(b[q])) c = true;
        }
        if (z == true && x == true && c == true && used.find(b) == used.end()) {
            qwe.push_back(b);
            used.insert(b);
        }
    }
    sort (qwe.begin(), qwe.end());
    cout << qwe.size() << endl;

    for (int i = 0;i < qwe.size();i++) {
        cout << qwe[i] << endl;
    }
    return 0;
}
