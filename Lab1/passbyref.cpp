#include <iostream>
using namespace std;

void swap(int &x, int &y)  {
    int z=x;
    x=y;
    y=z;
}

int main() {
    int a=45,b=35;
    cout<<"Before Swapping\n";
    cout<<"a= "<<a<<endl<<"b= "<<b<<"\n";
    swap(a,b);
    cout<<"After swap with pass by reference\n";
    cout<<"a= "<<a<<endl<<"b= "<<b<<"\n";
    return 0;
}
