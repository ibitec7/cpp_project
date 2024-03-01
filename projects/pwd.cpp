#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool len(string n){
    if (n.size()<10){
        return false;
    }
    else{
        return true;
    }
}

bool isvalid(string n) {
    if (n.length()==0){
        return true;
    }
    if (isalnum(n[0])) {
        return true* isvalid(n.substr(1));;
    }
    if (isalpha(n[0])) {
        return true* isvalid(n.substr(1));
    }
    if (isupper(n[0])) {
        return true * isvalid(n.substr(1));
    }
    if (islower(n[0])) {
        return true* isvalid(n.substr(1));;
    }
    if (isdigit(n[0])) {
        return true*isvalid(n.substr(1));;
    }
    else {
        return false;
    }
}

int main(){
    string n="xxxd";
    bool z=isvalid(n)*len(n);
    cout<<z;
}
