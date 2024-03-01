#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int digit(string line){
    int count=0;
    int num=0;
    for (char a : line){
        if(isdigit(a) && count==0){
            num=a - '0';
            count++;
        }
        else if (isdigit(a) && count>0){
            num= num*10 + (a-'0');
        }
        else if (isdigit(a)==false && count>0){
            break;
        }
    }
    return num;
}

int main(){
    vector<int> grades;
    string file_path="marks.txt";
    ifstream fin;
    ofstream fout;
    fin.open(file_path);
    fout.open(file_path,ios::app);
    if (fin.is_open()){
        string line;
        while(getline(fin,line)){
            grades.push_back(digit(line));
            cout<<endl;
        }

        fin.close();
    }else { cerr<< "File can not be read"<<endl;}

        float avg=0;
        float sum=0;
        for (const auto& grade : grades){
            sum+=grade;
        }
        avg=sum/static_cast<float>(grades.size());
        int min=999999,max=0;
        for (const auto& grade : grades){
            if (grade>max){
                max=grade;
            }
            if (grade<min){
                min=grade;
            }
        }
    
        int total = grades.size();
    if (fout.is_open()){
        fout<<"\nThe average grade is: "<<avg<<"\n";
        fout<<"The lowest grade is: "<<min<<"\n";
        fout<<"The maximum grade is: "<<max<<"\n";
        fout<<"The total students are: "<<total<<"\n";

        fout.close();
    }
    else{
        cerr<<"Error reading file at: "<<file_path<<endl;
    }
    for (int a:grades){
        cout<<a<<endl;
    }
}
