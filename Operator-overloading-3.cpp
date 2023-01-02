//Write a program using operator overloading to overload Stream operators (<< and >>) to read
//and display the objects of complex class.

#include <iostream>
using namespace std;

class number{
private:
    int real,img;
public:
    number(){
        real=0;img=0;
    }
    void change(int a,int b){
        real=a;
        img=b;
    }

    friend void operator >>(char,number &ob1);
    friend void operator <<(char,number &ob1);
};

void operator >>(char ch,number &ob1) {
    int a,b;
    cout<<"Enter real part";
    cin>>ob1.real;
    cout<<"Enter imaginary part";
    cin>>ob1.img;
}

void operator <<(char a,number &ob1) {
    cout<<ob1.real;
    cout<<" + "<<ob1.img<<"i";
}
int main(){
    number ob1;
    char in='a',out='b';
    in >> ob1;
    out << ob1;

}
