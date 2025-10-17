#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   long long a;
   cin >> a;
   long long arr[a];
   for (int i = 0;i < a;i++) {
      cin >> arr[i];
   }
   int maxval = *max_element(arr, arr + a);
   int minval = *min_element(arr, arr + a);
   for (int i = 0;i < a;i++) {
      if (arr[i] == maxval) {
         arr[i] = minval;
      }
   }
      for (int i = 0;i < a;i++) {
         cout << arr[i] << " ";
      }
return 0;
}
