#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout<<fixed<<setprecision(3);

    double price;
    while (cin>>price){
        cout<<setw(10)<<price<<"\n";
    }
    return 0;
}
