#include <iostream>
#include <queue>
#include <cctype>
using namespace std;

int main () {
   queue <string> que;
   int a, b;string name; cin >> a;
   while (--a >= 0) {
      cin >> b;
      if (b == 1) {
         cin >> name;
         que.push(name);
         cout << que.front() << endl;
      }
      else {
         que.pop();
      if (que.size() == 0) cout << "queue is empty" << endl;
      else cout << que.front() << endl;
      }
   }
   return 0;
}
