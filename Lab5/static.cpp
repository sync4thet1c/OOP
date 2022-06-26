#include<iostream>
using namespace std;

class Box {
public:
    static int objectcount;
    Box(double l=20, double b=20, double h=20) {
        cout<<"COnstructor called"<<endl;
        length = l;
        breadth = b;
        height = h;
        objectcount++;
    }
    double Volume() {
        return length *breadth * height;
    }
private:
    double length;
    double breadth;
    double height;
};

int Box::objectcount = 0;
int main(void) {
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);
    cout<<"Total objects: "<<Box::objectcount<<endl;
    return 0;

}
