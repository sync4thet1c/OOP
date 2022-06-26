#include <iostream>
using namespace std;
//base class
class Animal {
public:
    void eat() {
        cout<<"I can eat"<<endl;
    }
    void sleep() {
        cout<<"I can sleep"<<endl;
    }
};

//derived class
class Dog:public Animal {
public:
    void bark() {
        cout<<"I can bark! Vau Vau" <<endl;
        }
};

int main() {
    Dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.bark();
    return 0;
}
