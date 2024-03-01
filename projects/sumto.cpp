#include <iostream>

using namespace std;

double sumTo(double n){
    if (n>0){
        return 1/n+sumTo(n-1);
    }
    else{
        return 0;
    }
}
int main(){
    double x = sumTo(10);
    cout<<x;
}
