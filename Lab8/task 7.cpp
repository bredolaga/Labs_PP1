using namespace std;
#include <iostream>

int main() {
    int a, credits = 0;
    double gpa = 0;
    cin >> a;
    double arrA[a][4];

    for (int i = 0;i < a;i++) {
        for (int q = 0; q < 4; q++) {
            cin >> arrA[i][q];
            if (q == 3) credits += arrA[i][q];
        }
    }

    for (int i = 0;i < a;i++) {
        double qwe = (arrA[i][0] + arrA[i][1] + arrA[i][2]);
        if (arrA[i][0] + arrA[i][1] < 30) continue;
        if (arrA[i][2] < 20) continue;
        double gp = 0;
        gp += 1.0;
        for (int i = 0;qwe > 54;i++) {
            qwe -= 5;
            if (i % 3 != 0) gp += 0.333333;
            else gp += 0.333334;
        }
        gp *= arrA[i][3];
        gpa += gp;
    }
    cout << (gpa / credits);
    return 0;
}
