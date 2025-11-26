#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack <int> stk;
    int a, b; cin >> a;
    bool sold = false;
    while (--a >= 0) {
        cin >> b;
        if (b > 0) stk.push(b);
        else if (b == 0) {
            cout << stk.top() << " ";
            stk.pop();
            sold = true;
        }
    }
    if (!sold) cout << -1;
    return 0;
}
