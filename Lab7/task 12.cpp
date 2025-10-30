using namespace std;
#include <iostream>

int f(int arrA[],int arrB[], int a) {
    int w = 0;
    int arr1[101] = {0};
    int arr2[101] = {0};
    for (int i = 0;i < a;i++) {
        arr1[arrA[i]]++;
    }
    for (int i = 0;i < a;i++) {
        arr2[arrB[i]]++;
    }
    for (int i = 0;i < 101; i++){
        while (arr1[i] > 0 && arr2[i] > 0) {
            arr1[i]--;
            arr2[i]--;
            w++;
        }
    }

    return w;
}

int main() {
    int a;
    cin >> a;
    int arrA[a], arrB[a];

    for (int i = 0;i < a;i++) {
        cin >> arrA[i];
    }
    for (int i = 0;i < a;i++) {
        cin >> arrB[i];
    }

    cout << f(arrA, arrB, a);
}
