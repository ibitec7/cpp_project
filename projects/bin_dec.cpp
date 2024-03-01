#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int bin,dec(0),count(0),d;
    cin>>"Enter binary number: ">>bin;
    while (bin!=0){
        d=bin%10;
        bin /= 10;
        if (d==1){
            dec += pow(2,count);
        }
        count++;
    }
    cout<<dec<<endl;
}
