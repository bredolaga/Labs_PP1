using namespace std;
#include <map>
#include <iostream>

int main() {
    int a; cin >> a;
    map <string, string> boring;

    for (int i = 0;i < a;i++) {
        string action, key; cin >> action >> key;
        if (action == "set") {
            string value; cin >> value;
            boring[key] = value;
        }
        else {
            if (boring.find(key) == boring.end()) cout << "KE: no key " << key <<" found in the document" << endl;
            else cout << boring[key] << endl;
        }
    }
    return 0;
}
