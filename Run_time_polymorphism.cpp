#include <iostream>
using namespace std;

class shape{
    protected:
        int width, height,a;
    public:
        shape(int a,int b){
            width = a;
            height = b;
        }
        virtual int area(){
            cout << "Parent class area:" << endl;
            a = width * height;
            cout<< a << endl;
            return 0;
        }
};
class square: public shape{
    public:
        square(int a=0,int b=0):shape(a,b){}
        int area(){
            cout << "Square class area:" << endl;
            a = width * height;
            cout<< a << endl;
            return 0;
        }
};
class rectangle: public shape{
    public:
        rectangle(int a=0,int b=0):shape(a,b){}
        int area(){
            cout << "Rectangle class area:" << endl;
            a = width * height;
            cout<< a << endl;
            return 0;
        }
};
int main(){
    shape *shape;
    square sq(10,10);
    shape = &sq;
    shape->area();
    rectangle rec(10,7);
    shape = &rec;
    shape->area();
    return 0;
}
