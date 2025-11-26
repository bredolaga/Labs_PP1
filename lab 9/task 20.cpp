using namespace std;
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

int main() {
    int n; cin >> n;
    stack<string> st, undo;
    string s, name, res;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "DO") {
            cin >> name;
            while (!undo.empty()) { undo.pop(); }
            st.push(name);
        }
        else if (s == "UNDO") {
            if (!st.empty()) {
                undo.push(st.top());
                st.pop();
            }
        }
        else if (s == "REDO") {
            if (!undo.empty()) {
                st.push(undo.top());
                undo.pop();
            }
        }
        else if (s == "HISTORY") {
            if (st.empty()) {
                cout << "EMPTY\n";
            }
            else {
                vector<string> v;
                stack<string> copy = st;
                while (!copy.empty()) {
                    v.push_back(copy.top());
                    copy.pop();
                }
                reverse(v.begin(), v.end());
                for (string x : v) {
                    res.append(x);
                    res.append(" ");
                }
                if (res[res.length() - 1] == ' ') {
                    res = res.substr(0, res.length() - 1);
                }
                res.append("\n");
            }
        }
    }
    if (res[res.length() - 1] == ' ') {
        res = res.substr(0, res.length() - 1);
    }
    cout << res;
    return 0;
}
