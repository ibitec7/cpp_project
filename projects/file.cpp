#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream fin;
    string file_path="marks.txt";
    fin.open(file_path);
    if (fin.is_open()){
        string line;
        while (getline(fin,line)){
            cout<<line<<endl;
        }
        fin.close();
    }
    else{
        cerr<<"Error reading file at: "<<file_path<<endl;
    }

    ofstream fout;
    fout.open(file_path,ios::app);
    if (fout.is_open()){
        fout.seekp(0,ios::end);
        fout<<"File read successfully!\n ";
        fout.close();
    }
    else{
        cerr<<"Error writing to file at: "<<file_path<<endl;
    }

    // fstream file;
    // file.open(file_path,ios::in | ios::out | ios::app);

    // if (file.is_open()){
    //     string line;
    //     while (getline(file,line)){
    //         cout<<line<<endl;
    //     }

    //     file.seekp(0,ios::end);
    //     file<<"This File has been read successfully!\n"<<endl;
    //     file<<"Thank you!\n";
    //     file.close();
    // }
    // else{
    //     cerr<<"Error reading file at: "<<file_path;
    // }

    // cout<<"File read and written successfully!"<<endl;
}