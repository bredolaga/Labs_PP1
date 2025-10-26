#include <iostream>
using namespace std;

int main() {
    int a , b , c, v , n, g;
    cin >> a >> b >> v >> n;
    c = 8;
    g = 0;
    string arrA[8][8];
    if (a >= 8 || b >= 8 || v >= 8|| n >= 8) {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < c;i++) {
        for (int r = 0;r < c;r++) {
            arrA[i][r] = "*";
        }
    }

    arrA[a][b] = "P";
    arrA[v][n] = "T";
    int m = - 1;
    int ax[2] = {-1, -1};
    int ay[2] = {-1, 1};
    bool hit = false;

 while (a > 0) {
     cout << "step" << g << ":" << endl;
     for (int i = 0; i < c;i++) {
         for (int r = 0;r < c;r++) {
             cout << arrA[i][r] << " ";
         }
         cout << endl;
     }
     cout << endl;
     g ++;
     for (int i = 0;i < 2;i++) {
         int x = a + ax[i];
         int y = b + ay[i];
         if (x >= 0 && x < 8 && y >= 0 && y < 8 && arrA[x][y] == "T") {
             hit = true;
             arrA[x][y] = "@";
         }
     }
     if (hit == true) break;
     if (hit == false && a > 0) {
         arrA[a][b] = "*";
         a += m;
         arrA[a][b] = "P";
     }
 }
    
    if (hit == true) {
        cout << "Target hit!" << endl;
        cout << "by " << g << " step" << endl;
    }
    else
        cout << "Target unreachable." << endl;

    for (int i = 0; i < c;i++) {
        for (int r = 0;r < c;r++) {
            cout << arrA[i][r] << " ";
        }
        cout << endl;
    }
    return 0;
}
