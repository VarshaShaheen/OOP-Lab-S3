//Write a class to store a string data. Overload the following operators: + to concatenate two strings, -(unary minus) to reverse a string

#include <iostream>
#include <string.h>
using namespace std;

class String {
private:
    char str[20];
public:
    void init(){
        cout << "Enter a string: ";
        cin >> str;
    }
    String operator +(String s){
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    String operator -(){
        String temp;
        strcpy(temp.str, str);
        strrev(temp.str);
        return temp;
    }
    void display(){
        cout << str << endl;
    }
};

int main(){
    String s1, s2, s3, s4;
    s1.init();
    s2.init();
    s3 = s1 + s2;
    s4 = -s3;
    cout << "Concatenated string: "; s3.display();
    cout << "Reversed string: "; s4.display();
    return 0;
}
