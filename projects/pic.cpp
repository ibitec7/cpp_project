#include<iostream>

using namespace std;

int main(){
    // struct pixel{
    //     int red;
    //     int blue;
    //     int green;
    // };


    // struct image{
    //     int res;
    //     int pix[res][res];
    //     void load(int x){
    //         pix[res][res]={{x}};
    //     }
    // };

    // pixel x;
    // x.red=5;
    // x.blue=7;
    // x.green=24;

    // image pic;
    // pic.res=32;
    // pic.load(x.green);

    // for (int i=0;i<pic.res;i++){
    //     for (int j=0;j<pic.res;j++){
    //         cout<<pic.pix[i][j];
    //     }
    //     cout<<endl;
    // }

    string a="Hello";
    for (char x : a){
        cout<<x<<endl;
    }
}