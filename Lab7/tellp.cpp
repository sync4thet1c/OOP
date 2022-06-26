#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file;
    file.open("myfile.txt,ios::out");
    file<<"geeksforgeeks";
    cout<<"The current position of pointer is: "
        <<file.tellp()<<endl;
    file.close();
}

