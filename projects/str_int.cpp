#include <iostream>

using namespace std;

int main() {
    string a;
    bool con = false;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'a' and a[i] <= 'z') {
            con= true;
            cout<<0;
            break;
        }
    }
    if (con==false){
        for (int i=0;i<a.size();i++){
           if (a[i]>='0' and a[i]<='9'){
               cout<<a[i];
           }
        }
    }
}
