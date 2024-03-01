#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout<<fixed<<setprecision(3);
    int count(0);
    double price;
    while (cin>>price){
        price=floor(price);
        while(count<price){
            cout<<"*";
            count++;
        }
        cout<<endl;
        count=0;
    }
    return 0;
}
