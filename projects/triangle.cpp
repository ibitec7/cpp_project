#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int count1(0),count2(0),N;
    cin>>"Enter max layers of triangle: ">>N;
    while (count1<=N){
        while(count2<count1){
            cout<<"*";
            count2++;
        }
        count2=0;
    cout<<" \n";
    count1++;
    }
}
