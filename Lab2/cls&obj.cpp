#include <iostream>
using namespace std;

class Room {
    double length;
    double breadth;
    double height;
    double CalculateArea() {
        return length*height;
    }
    double CalculateVolume() {
        return length*breadth*height;
    }
};

int main() {
    Room room1;
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height= 19.2;
    cout<<"Area of room = "<<room1.CalculateArea()<<endl;
    cout<<"Volume of room= "<<room1.CalculateVolume()<<endl;
    return 0;
}
