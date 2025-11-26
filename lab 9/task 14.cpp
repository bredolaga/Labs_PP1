#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack<long long> stk;
    int a;  cin >> a; long long b, c = 0;
    for (int i = 0; i < a; i++) {
        cin >> b;
        if (stk.size() > 0)
            c = stk.top();
        while (!stk.empty() && b >= stk.top()) stk.pop();
        stk.push(b);
        cout << stk.size() << " ";
    }
    return 0;
}
