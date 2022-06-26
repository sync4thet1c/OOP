#include <iostream>
using namespace std;

class Wall {
    private:
        double length;
        double height;
    public:
        Wall(double len, double hgt) {
        length = len;
        height = hgt;
        }
        double CalculateArea() {
            return length * height;
        }
};

int main() {
    Wall Wall1(10.5, 8.6);
    Wall Wall2(8.5, 6.3);
    cout<<"Area of Wall1: "<<Wall1.CalculateArea()<<endl;
    cout<<"Area of Wall2: "<<Wall2.CalculateArea()<<endl;
    return 0;
}
