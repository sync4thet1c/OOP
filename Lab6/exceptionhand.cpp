#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    catch(char *excp) {
        cout<<"caught"<<excp;
    }
    catch(...) {
        cout<<"Default exceptions\n";
    }
    return 0;
}
