#include <iostream>
using namespace std;

int main() {
    int count(0),num,count2(1),count3(1);
    cin>>"Input the number you want triangle of: ">>num;
    while(count<num){
        count2=num;
        while(count2>count){
            cout<<' ';
            count2--;
        }
        while(count3<=count2){
            cout<<count3;
            count3++;
        }
        while(count3>=1){
            cout<<count3;
            count3--;
        }
        cout<<endl;
        count++;
        count2=1;
        count3=1;
    }
}
