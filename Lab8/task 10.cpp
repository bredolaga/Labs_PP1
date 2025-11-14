#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> qwe;
    int a;
    int i = 0;

    while (cin >> a) {
        qwe.insert({a, i});
        i++;
        if (cin.peek() == '\n' || cin.peek() == EOF)
            break;
    }

    cout << qwe.size();
    return 0;
}
