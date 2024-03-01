#include <iostream>

using namespace std;

long fact(long n){
    if (n == 0) {
        return 1;
    } else {
        return (n) * fact(n - 1);
    }
}


int main(){
    long a=fact(5);
    cout<<a;
}
