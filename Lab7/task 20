using namespace std;
#include <iostream>
#include <map>

    int f(string s) {
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

        int b;
        char op;
        for (char c : {'+', '-', '*', '/'}) {
            b = s.find(c);
            if (b != string::npos) {
                op = c;
                break;
            }
        }


        string l = s.substr(0, b);
        string r = s.substr(b + 1);
        string num1 = "", num2 = "";

            for (int i = 0;i < l.size();i +=3) {
                num1 += a[l.substr(i, 3)];
            }
            for (int i = 0;i < r.size();i +=3) {
                num2 += a[r.substr(i, 3)];
            }

            long long x = stoll(num1);
            long long y = stoll(num2);
            long long res;


             if (op == '+') res = x + y;
             else if (op == '-') res = x - y;
             else if (op == '*') res = x * y;
             else if (op == '/') res = x / y;

            string g = to_string(res);
            for (char c : g)
                cout << ab[c];
            return 0;
    }


int main() {
    string a;
    cin >> a;
        f(a);
    return 0;
}
