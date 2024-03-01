#include <iostream>
using namespace std;

int main(){
    int num,count(1),sum(0),count2(1);
    cin>>"Enter running sum number: ">>num;
    while(count<=num) {
        while(count2<=count){
            if(count2==count){
                cout<<count2;
            }
            else {
                cout << count2 << '+';
            }
            sum += count2;
            count2++;
        }
        cout<<'='<<sum<<endl;
        sum=0;
        count2=1;
        count++;
    }
}
