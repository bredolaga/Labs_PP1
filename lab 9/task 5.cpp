#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main () {
    int a, c, fst = 0, scnd = 0;
    vector <int> vec;
    map <int , int> mp;
    cin >> a;
    for (int i = 0;i < a;i++) {
        cin >> c;
        vec.push_back(c);
        if (c > fst) {
             scnd = fst;
             fst = c;
        }
        if (c > scnd && c < fst) scnd = c;
    }
    mp[scnd] = 0;

    for (int i = 0;i < a;i++) {
        if (vec[i] == scnd) mp[scnd] ++;
    }
    cout << mp[scnd];
    return 0;
}
