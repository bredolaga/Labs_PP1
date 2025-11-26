using namespace std;
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

int main () {
    int n; cin >> n;
    deque<string> deq; string s, name;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "ARRIVE") {
            cin >> name;
            deq.push_back(name);
            cout << name << " joined the line" << endl;
        }
        else if (s == "SERVE") {
            if (!deq.empty()) {
                cout << deq.front() << " has been served" << endl;
                deq.pop_front();
            }
            else cout << "No customers to serve" << endl;
        }
        else if (s == "SHOW") {
            if (!deq.empty()) {
                cout << "Line:";
                for (string x : deq) cout << " " << x;
                cout << endl;
            }
            else cout << "Line is empty" << endl;
        }
    }
    return 0;
}
