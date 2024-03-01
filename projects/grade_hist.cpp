#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); //initializing random seed with current timestamp
    array<int, 100> marks;                           //declaring an empty array "marks" of size 100
    array<string,10> grade{"0-9   ","10-19 ","20-29 ","30-39 ","40-49 ","50-59 ","60-69 ","70-79 ","80-89 ","90-100"}; //declaring array of grade bins
    array<int, 10> freq{0};                          //initializing array of size 10 with values 0
    int count(0),count2(0),index, i,num;
    for (count=0;count<marks.size();count++){        //iterating over marks array
        int num = 1 + rand()%100;                    //generating random numbers from 1 to 100
        marks[count] = num;                          //filling marks array with random numbers at index
    }
    for (count = 0; count < marks.size(); count++) { //iterating over marks array
        index = marks[count]/10;                     //finding index to add count
        freq[index]++;                               //incrementing count at index of freq array
    }
    for (count2 = 0; count2 < grade.size(); count2++){      //iterating over grade array
        cout<<grade[count2]<<": ";                   //output grade bin header
       for(i=0;i<freq[count2];i++){                  //iterating over freq array
           cout<<"*";                                //output stericks for count in grade bin
       }
       cout<<endl;
    }
}
