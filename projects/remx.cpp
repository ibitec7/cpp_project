#include <iostream>
#include <string>

using namespace std;

string removeX(string n,int a){
    if (a>=0) {
        if (n[a] == 'x') {
            return rem(n, a - 1)+"";
        } else if (n[a] != 'x') {
            return rem(n, a - 1)+n[a];
        }
    }
    else{
        return "";
    }
}
int main(){
    string n="Hxexxxllo";
    n=removeX(n,n.size());
    cout<<n;
}
