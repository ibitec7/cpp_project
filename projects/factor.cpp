#include <iostream>

using namespace std;

bool isFactor(int n1,int n2){
    if (n1%n2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<isFactor(a,b);
}
