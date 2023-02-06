//Define shape with l&b ,parameterized constructor, and pure virtual function area. Derive rectangle and square from shape. Define area and parameterized constructor for rectangle and square, redefine area in it.

#include <iostream>
using namespace std;

class shape
{
protected:
    int l, b;
public:
    shape(int x, int y)
    {
        l = x;
        b = y;
    }
    virtual void area() = 0;
};
class rectangle: public shape
{
protected:
    int area1;
public:
    rectangle(int x, int y): shape(x,y){}
    void area(){
        area1 = l*b;
        cout << "Area of rectangle is: " << area1 << endl;
    }
};
class square: public shape
{
protected:
    int area2;
public:
    square(int x, int y): shape(x,y){}
    void area(){
        area2 = l*l;
        cout << "Area of square is: " << area2 << endl;
    }
};
int main()
{
    int n,l,b;
    shape *ptr;
    cout<<"Enter 1 for rectangle and 2 for square: ";
    cin>>n;
    switch(n){
        case 1:
        {cout<<"Enter length and breadth of rectangle: ";
            cin>>l>>b;
            rectangle r(l,b);
            ptr = &r;
            ptr->area();
            break;}
        case 2:{
                cout<<"Enter length of square: ";
                cin>>l;
                square s(l,l);
                ptr = &s;
                ptr->area();
                break;
            }


    }
}
