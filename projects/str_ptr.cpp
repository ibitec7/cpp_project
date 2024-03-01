#include <iostream>

using namespace std;

bool isvowel(char x){
    switch (x){
        case 'a':
            return true;
        case 'e':
            return true;
        case 'i':
            return true;
        case 'o':
            return true;
        case 'u':
            return true;
        default:
            return false;
    }
}

int vowelcount(char* ptr,int len){
    int count=0;
    for (int i=0; i<len; i++){
        if (isvowel(*(ptr+i))){
            count++;
        }
    }
    return count;
}

int length(char* ptr){
    int len=0;
    while (len<100){
        len++;
        if (*(ptr+len)=='\0'){
            break;
        }
    }
    return len;
}

void copy(char* x,char* y,int len){
    for (int i=0;i<len;i++){
        *(y+i)=*(x+i);
    }
}

void printstr(char* x,int len){
    for (int i=0;i<len;i++){
        cout<<*(x+i);
    }
    cout<<endl;
}

int main() {
    char str[100],str2[100];
    int count=0;
    char* ptr=str;
    char* ptr2=str2;

    cin.getline(str,100);

    int len= length(ptr);

    copy(ptr,ptr2,len);

    printstr(ptr2,len);

    int vow= vowelcount(ptr,len);

    cout<<"Length of string: "<<len<<endl;
    cout<<"Vowel Count: "<<vow;
}
