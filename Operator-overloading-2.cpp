//Distance is measured in feet and inches. Use operator overloading for '+' operator for adding
//two such distances and '<' for comparing two such distances. (one of the operator functions should
//be implemented as a friend function.)

#include <iostream>
using namespace std;

class dis{
private:
    int dis_feet, dis_inch;
public:
    void _init_(){
        cout<<"Enter distance in the format 'feet inch'";
        cin>>dis_feet>>dis_inch;

    }
    dis operator +(dis ob2){
        dis ob3;
        ob3.dis_feet = dis_feet + ob2.dis_feet;
        ob3.dis_inch = dis_inch + ob2.dis_inch;
        ob3.dis_feet = ob3.dis_feet + ob3.dis_inch/12;
        ob3.dis_inch%=12;
        return ob3;
    }
    void print(){
        cout<<dis_feet<<" feet "<<dis_inch<<" inch";
    }

    friend void operator <(dis ob1,dis ob2);

};

void operator <(dis ob1,dis ob2){
    if(ob1.dis_feet<ob2.dis_feet && ob1.dis_feet!=ob2.dis_feet){
        ob1.print();
        cout<<" < ";
        ob2.print();
        cout<<" is true";
    }
    else if(ob1.dis_feet>ob2.dis_feet && ob1.dis_feet!=ob2.dis_feet){
        ob1.print();
        cout<<" < ";
        ob2.print();
        cout<<" is false";
    }
    else if(ob1.dis_feet==ob2.dis_feet && ob1.dis_inch<ob2.dis_inch){
        ob1.print();
        cout<<" < ";
        ob2.print();
        cout<<" is true";
    }
    else if(ob1.dis_feet==ob2.dis_feet && ob1.dis_inch>ob2.dis_inch){
        ob1.print();
        cout<<" < ";
        ob2.print();
        cout<<" is false";
    }
    else{
        cout<<"Both are equal";
    }
}

int main(){
    dis ob1,ob2,ob3;
    ob1._init_();
    ob2._init_();
    ob3=ob1+ob2;
    ob3.print();
    cout<<"\n";
    ob1<ob2;
}
