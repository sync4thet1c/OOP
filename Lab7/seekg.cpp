#include <iostream>
#include <fstream>

using namespace std;
int main(int argC, char **argV) {
    fstream myfile("test.txt", ios::in| ios::oot| ios:: trunc);
    myfile<<"Hello World";
    myfile.seekg(6, ios::beg);
    char A[6];
    myfile.read(A, 5);
    A[5] = 0;
    cout<<A<<endl;
    myfil.close();
}
