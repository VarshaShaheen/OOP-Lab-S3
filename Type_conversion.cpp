// Polar coordinates in angle and radius, rectangular coordinates in x and y. Convert polar to rectangular.

#include <iostream>
#include <cmath>
using namespace std;

class Rectangular {
public:
    double x;
    double y;
public:
    void display(){
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }
};
class Polar {
protected:
    double angle;
    double radius;
public:
    void init(){
        cout << "Enter angle: ";
        cin >> angle;
        cout << "Enter radius: ";
        cin >> radius;
    }
    operator Rectangular(){
        Rectangular r;
        r.x = radius * cos(angle);
        r.y = radius * sin(angle);
        return r;
    }
    void show(){
        cout << "Angle: " << angle << endl;
        cout << "Radius: " << radius << endl;
    }
};

int main() {
    Polar p;
    Rectangular r;
    p.init();
    r = p;
    p.show();
    r.display();
    return 0;
}
