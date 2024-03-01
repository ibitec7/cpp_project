#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout<<fixed<<setprecision(3);
    int up(0),down(0);
    double price,prec(0),diff;
    while (cin>>price){
        cout<<setw(10)<<price;
        diff=price-prec;
        if (diff<0){
            down++;
        }
        else if (diff>0){
            up++;
        }
        prec=price;
        if (up>=3 && diff<0){
            cout<<"  sell";
            up=0;
        }
        else if (down>=3 && diff>0){
            cout<<"  buy";
            down=0;
        }
        if (diff<0){
            up=0;
        }
        else if (diff>0){
            down=0;
        }
        cout<<endl;
    }
    return 0;
}
