#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x,rem,y,z;
    cout<<"Enter your number"<<endl;
    cin>>x;
    y=x;
    while(x!=0) {
        rem = x % 10;
        x = x/10;
        z = z*10 +rem;
    }
    if(y==z){
        cout<<"Number is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
}
