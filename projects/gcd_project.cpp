#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1,num2,div=2,gcd=1;
    cout<<"Enter the two numbers"<<endl;
    cin>>num1;
    cin>>num2;
    while((div<=num1) && (div<=num2)){
        if((num1%div==0) && (num2%div==0)){
            gcd=div;
        }

        div++;
    }
    cout<<gcd;
}
