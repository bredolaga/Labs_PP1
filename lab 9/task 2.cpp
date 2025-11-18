#include <iostream>
#include <vector>
using namespace std;

int main () {
    int a, b; cin >> a;
    vector <int> arr1; vector <int> arr2;
    for (int i = 0;i < a;i++) {
        cin >> b;
        if (b % 2 == 0) arr1.push_back(b);
        if (b % 2 == 1) arr2.push_back(b);
    }
    for (int i = 0;i < arr1.size();i++) {
        for (int q = 0;q < arr1.size();q++) {
            if (arr1[i] > arr1[q]) swap(arr1[i] ,arr1[q]);
        }
    }
    for (int i = 0;i < arr2.size();i++) {
        for (int q = 0;q < arr2.size();q++) {
            if (arr2[i] < arr2[q]) swap(arr2[i] ,arr2[q]);
        }
    }

    for (int i = 0;i < arr1.size();i++) {
        cout << arr1[i] << " ";
    }
    for (int i = 0;i < arr2.size();i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
