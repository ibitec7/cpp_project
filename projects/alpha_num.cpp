#include <iostream>

using namespace std;

int main() {
    string a;
    int c1 = 0,c2=0,c3=0,f=0;
    getline(cin, a);

    const int MAX_SIZE = 10;
    int b[MAX_SIZE];

    for (int i = 0; i < a.size() && c1 < MAX_SIZE; i++) {
        if (a[i] == ' ') {
            b[c1] = i;
            c1++;
        }
    }

    for (int i = 0; i < c1; i++) {
        for (int j=f;j<b[i];j++){
            if (a[j]>='a' and a[j]<='z'){
                c2++;
            }
            if (a[j]>='0' and a[j]<='9'){
                c3++;
            }
        }
        if (c2!=0 and c3!=0){
            for (int j=f;j<b[i];j++){
                cout<<a[j];
            }
        }
        f=b[i];
        c2=0;
        c3=0;
    }

    return 0;
}
