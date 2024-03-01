#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int r1, r2, c1, c2, i, j, k,sum(0);
    cout << "Enter Rows and Columns of Matrix 1" << endl;
    cin >> r1;
    cin >> c1;
    cout << "Enter Rows and Columns of Matrix 2" << endl;
    cin >> r2;
    cin >> c2;
    int m1[r1][c1] = {0};
    int m2[r2][c2] = {0};
    int out[r1][c2] = {0};
    srand(static_cast<unsigned int>(time(nullptr)));
    cout<<"Input Matrix 1 Data"<<endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> m1[i][j];
        }
    }
    cout<<"Input Matrix 2 Data"<<endl;
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> m2[i][j];
        }
    }
    if (c1 != r2) {
        cout << "Dimensionality Error" << endl;
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k=0;k<r2;k++){
                sum += m1[i][k] * m2[k][j];
            }
            out[i][j] = sum;
            sum=0;
        }
    }
    for (i = 0; i < r1; i++) {
        cout<<"| ";
        for (j = 0; j < c2; j++) {
            cout << out[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }
}
