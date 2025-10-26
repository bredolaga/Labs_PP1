using namespace std;
#include <iostream>
#include <sstream>

int main() {
    int b = 0, c = 0;
    string a;
    cin >> a;

    for (int i = 0;i < a.size();i++) {
       if ( a[i] == toupper(a[i])) b++;
       else c ++;
    }
    cout << c << " " << b;
    return 0;
}
