#include <iostream>
using namespace std;
class classB;
class ClassA {
private:
    int numA;
    //friend class declaration
    friend class classB;
public:
    //constructor to initialize numA to 12
    ClassA():numA(12) {}
};

class classB {
private:
     int numB;
public:
    classB():numB(1) {}
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main() {
    classB objectB;
    cout<<"Sum: "<<objectB.add();
    return 0;
}
