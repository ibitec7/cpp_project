#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout<<fixed<<setprecision(3);
    int up(0),down(0),count(1);
    float price,prior(0),diff,cash(10000),shares(0),value(0);
    cout<<setw(3)<<"period"<<setw(10)<<"price"<<setw(10)<<"cash";
    cout<<setw(15)<<"shares"<<setw(13)<<"value"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    while (cin>>price){
        diff = price - prior;
        if (diff>0){
            up++;
        }
        else if (diff<0){
            down++;
        }
        if (up>=2 && diff<0){
            cash = shares*price;
            shares = 0;
            up = 0;

        }
        else if (down>=2 && diff>0){
            shares = cash/price;
            cash = 0;
            down = 0;
        }
        if (diff>0){
            down=0;
        }
        else if(diff<0){
            up=0;
        }
        shares = round(shares*100)/100;
        cash = round(cash*100)/100;
        value = cash + (shares*price);
        value = round(value*100)/100;
        prior = price;
        cout<<setw(3)<<right<<count<<setw(13)<<right<<fixed<<setprecision(3)<<price;
        cout<<setw(13)<<right<<fixed<<setprecision(2)<<cash<<setw(13)<<right<<fixed<<setprecision(2)<<shares;
        cout<<setw(13)<<right<<fixed<<setprecision(2)<<value;
        cout<<endl;
        count++;
    }
}
