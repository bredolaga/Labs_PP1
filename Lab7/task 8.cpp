#include <iostream>
using namespace std;

bool f(int a) {
   for (int i = 2;i <= a / 2;i++) {
           if (a % i == 0) return false;
   }
    return true;
}

int main() {
    int a;
    cin >> a;
    if (!f(a)) cout << "No";
    else cout << "Yes";
    return 0;
}
