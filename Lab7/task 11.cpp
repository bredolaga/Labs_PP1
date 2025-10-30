#include <iostream>
using namespace std;

int f(int arr1[], int arr2[], int arrC[], int a) {
      for (int i = 0;i < a;i++) {
      arrC[i] = arr1[i] - arr2[i];
      }
      return 0;
}


int main() {
    int a;
    cin >> a;
    int arrA[a];
    int arrB[a];
    int arrC[a];

   for (int i = 0;a > i; i++){
       cin >> arrA[i];
   }
   for (int i = 0;a > i; i++) {
       cin >> arrB[i];
   }

   f(arrA, arrB, arrC, a);
    for (int i = 0;a > i; i++) {
        cout << abs(arrC[i]) << " ";
    }
    return 0;
}
