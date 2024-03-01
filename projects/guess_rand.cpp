#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int num,count(0);
    bool condition = false;
    srand(static_cast<unsigned int>(time(nullptr)));
    int choice = 1 + rand()%100;
    do {
        cout<<"Guess the number:";
        cin>> num;
        if (num == -1){
            condition = true;
        }
        else if (num == choice){
            cout<<"You guessed right"<<endl;
            condition = true;
        }
        else if (num < choice){
            cout<<"Num is lower"<<endl;
        }
        else if (num > choice){
            cout<<"Num is higher"<<endl;
        }
        count++;
    } while (condition == false);
    cout << choice << " in these many tries: " << count <<endl;
}
