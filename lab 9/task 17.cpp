#include <iostream>
#include <vector>
#include <cctype>
#include <stack>
using namespace std;

    int prio(char c) {
        if (c == '+'  || c == '-') return 1;
        if (c == '*'  || c == '/') return 2;
        return 0;
    }

    int abcd(const string& in) {
        string s;

        for (char c : in) if (c != ' ') s.push_back(c);

        string res;
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (isdigit(ch)) {
                res.push_back(ch);
                res.push_back(' ');
            }
            else if (ch == '(') {
                st.push(ch);
            }
            else if (ch == ')') {
                while (!st.empty() && st.top() != '(') {
                    res.push_back(st.top());
                    res.push_back(' ');
                    st.pop();
                }
                st.pop();
            }
            else {
                while (!st.empty() && prio(st.top()) >= prio(ch)) {
                    res.push_back(st.top());
                    res.push_back(' ');
                    st.pop();
                }
                st.push(ch);
            }
        }

        while (!st.empty()) {
            res.push_back(st.top());
            res.push_back(' ');
            st.pop();
        }
        if (res[res.length() - 1] == ' ') {
            res = res.substr(0, res.length() - 1);
        }
        cout << res;
        return 0;
    }

int main () {
        string abc; getline(cin ,abc);
        abcd(abc);
        return 0;
    }
