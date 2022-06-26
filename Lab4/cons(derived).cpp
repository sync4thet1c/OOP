#include <iostream>
using namespace std;

//base class
class Parent {
public:
    //base class constructor
    Parent() {
        cout<<"Inside base class "<<endl;
    }
};

//sub class
class Child:public Parent {
    public:
    //subclass constructor
    Child() {
        cout<<"Inside sub class"<<endl;
    }
};

int main() {
    Child objl;
    return 0;
}
