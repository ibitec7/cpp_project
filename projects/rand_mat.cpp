#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int r1,r2,c1,c2,i,j;
    cout<<"Enter Rows and Columns of Matrix 1"<<endl;
    cin>>r1;
    cin>>c1;
    cout<<"Enter Rows and Columns of Matrix 2"<<endl;
    cin>>r2;
    cin>>c2;
    int m1[r1][c1] = {0};
    int m2[r2][c2] = {0};
    srand(static_cast<unsigned int>(time(nullptr)));
    for (i=0;i<r1;i++) {
        for (j = 0; j < c1; j++) {
            m1[i][j] = 1 + (rand() % 100);
        }
    }
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            m2[i][j] = 1 + rand()%100;
        }
    }
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cout << m2[i][j]<<" ";
        }
        cout<<endl;
    }
}
