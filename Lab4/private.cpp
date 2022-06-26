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

class PrivateDerived:private Base {
public:
    //function to access protected member from base
    int getprot() {
        return prot;
    }
    //function to access private member
    int getpub() {
        return pub;
    }
};

int main() {
    PrivateDerived object1;
    cout<<"Private cannot be accessed"<<endl;
    cout<<"Protected= "<<object1.getprot()<<endl;
    cout<<"Public= "<<object1.getpub()<<endl;
    return 0;
}
