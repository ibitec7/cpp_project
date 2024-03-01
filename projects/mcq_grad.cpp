#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(nullptr)));

    int marks[8]={0};
    char key[10]={'D','B','D','C','C','D','A','E','A','D'};
    char ans[8][10]={{'A'}};
    for (int i=0;i<8;i++){
        for (int j=0;j<10;j++){
            char ran='A'+rand()%5;
            ans[i][j] = ran;
        }
    }

    for (int i=0;i<8;i++){
        for (int j=0;j<10;j++){
            if (ans[i][j]==key[j]){
                marks[i]++;
            }
        }
    }
    for (int i=0;i<8;i++){
        cout<<marks[i]<<endl;
    }
}
