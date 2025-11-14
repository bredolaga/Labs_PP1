#include <iostream>
#include <map>
using namespace std;

int main () {
    map <int , int> qwe;
    qwe.insert({1 , 0});
    int a, b;
    cin >> a;
    cin.ignore();

    while (--a  >= 0) {
        cin >> b;
        if (b > qwe[1]) qwe[1] = b;
    }

    cout << qwe[1];
    return 0;
}
