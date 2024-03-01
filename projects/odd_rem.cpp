#include <iostream>
#include <cmath>

using namespace std;

int remover(int n){
    int x=0,rem;
    while (n!=0){
        rem=n%10;
        x=x*10+rem;
        n/=10;
    }
    while(x>0){
        if ((x%10)%2==0){
            cout<<x%10;
            x/=10;
        }
        else{
            x/=10;
        }
    }
    return 0;
}

int main() {
    int x;
    cin>>x;
    remover(x);
}
