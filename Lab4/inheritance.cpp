#include <iostream>
using namespace std;

class Base {
private:
    int pvt =1;
protected:
    int prot = 2;
public:
    int pub = 3;
    //function to access private member
    int getpvt() {
        return pvt;
    }
};

class PublicDerived:public Base {
public:
//function to access protected member from base
    int getprot() {
        return prot;
    }
};

int main() {
    PublicDerived object1;
    cout<<"Private= "<<object1.getpvt()<<endl;
    cout<<"Protected= "<<object1.getprot()<<endl;
    cout<<"Public= "<<object1.pub<<endl;
    return 0;
}
