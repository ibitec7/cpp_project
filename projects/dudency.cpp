#include <iostream>
#include <cmath>

using namespace std;

int dudency(int n){
    int sum=0,x=n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if (x==pow(sum,3)){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int count=0,dud=0;
    while(dud<7){
        if (dudency(count)==1){
            cout<<count<<endl;
            dud++;
        }
        count++;
    }
}

