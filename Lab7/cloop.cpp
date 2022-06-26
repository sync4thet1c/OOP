#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
int main() {
    string line;
    ifstream myfile("example.txt");
    if(myfile.is -open()) {
            while(getline(myfile.line)) {
                cout<<line<<endl;
            }
            myfile.close();
    }
    else cout<<"Unable to open file.";
    return 0;
}
