#include <iostream>
using namespace std;

void print(int i) {
    cout<<"This is int value "<<i<<endl;
}

void print(double f) {
    cout<<"This is float value "<<f<<endl;
}

int main(){
    print(10);
    print(10.2);
    return 0;
}
