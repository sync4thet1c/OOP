
/*#include <iostream>
using namespace std;
template<typename T> T myMax(T const& x, const& y) {
    return (x>y)?x:y;
}

int main() {
    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<double>(3.7, 7.0)<<endl;
    cout<<myMax<char>('a','e');
    return 0;
}
*/

//
#include <iostream>
using namespace std;
class Vehicle {
public:
    Vehicle() {
        cout<<"This is a vehicle\n";
    }
};

class car:public Vehicle {
};

int main() {
    car obj;
    return 0;
}
