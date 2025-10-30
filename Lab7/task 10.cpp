#include <iostream>
using namespace std;

bool f(int arr[], int a, int b) {
      for (int i = 0;i < a;i++) {
          if (arr[i] == b) return true;
      }
      return false;
}


int main() {
    int a, b;
    cin >> a;
    int arrA[a];

   for (int i = 0;a > i; i++){
       cin >> arrA[i];
   }

   cin >> b;

   if (!f(arrA, a, b)) cout << "No";
   else cout << "Yes";
    return 0;
}
