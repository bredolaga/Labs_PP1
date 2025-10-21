using namespace std;
#include <iostream>
#include <sstream>
#include <map>

int main() {
    string s;
    cin >> s;
    map <string, char> a = {{"ONE", '1'},
        {"TWO", '2'}, {"THR", '3'},{"FOU", '4'},
        {"FIV", '5'}, {"SIX", '6'}, {"SEV", '7'},
        {"EIG", '8'}, {"NIN", '9'}, {"ZER", '0'}
    };
    map <char, string> ab = { {'1', "ONE"},
        {'2', "TWO"}, {'3', "THR"}, {'4', "FOU"},
        {'5', "FIV"}, {'6', "SIX"}, {'7', "SEV"},
        {'8', "EIG"}, {'9', "NIN"}, {'0', "ZER"}
        };

    int b = s.find('+');
    string l = s.substr(0, b);
    string r = s.substr(b + 1);
    string num1 = "", num2 = "";

    for (int i = 0;i < l.size();i +=3) {
        num1 += a[l.substr(i, 3)];
    }
    for (int i = 0;i < r.size();i +=3) {
        num2 += a[r.substr(i, 3)];
    }

    long long sum = stoll(num1) + stoll(num2);

    string g = to_string(sum);
    for (char c : g)
    cout << ab[c];

    return 0;
}
