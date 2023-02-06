//hybrid polymorphism

#include <iostream>
using namespace std;

class grandfather{
protected:
    char name[20];
    int age;
public:
    void init_g(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display_g(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class father: public grandfather{
protected:
    char address[20], location[20];
public:
    void init_f(){
        grandfather::init_g();
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter location: ";
        cin >> location;
    }
    void display_f(){
        grandfather::display_g();
        cout << "Address: " << address << endl;
        cout << "Location: " << location << endl;
    }
};
class daughter: public father{
protected:
    char startup_name[20];
    int no_of_employees;
public:
    void init_d(){
        father::init_f();
        cout << "Enter startup name: ";
        cin >> startup_name;
        cout << "Enter no of employees: ";
        cin >> no_of_employees;
    }
    void display_d(){
        father::display_f();
        cout << "Startup name: " << startup_name << endl;
        cout << "No of employees: " << no_of_employees << endl;
    }
};
class son: public father{
protected:
    char job[20], company[20];
public:
    void init_s(){
        father::init_f();
        cout << "Enter job: ";
        cin >> job;
        cout << "Enter company: ";
        cin >> company;
    }
    void display_s(){
        father::display_f();
        cout << "Job: " << job << endl;
        cout << "Company: " << company << endl;
    }
};
class grandson: public son{
protected:
    char school[20];
    int cl;
public:
    void init_gs(){
        son::init_s();
        cout << "Enter school: ";
        cin >> school;
        cout << "Enter class: ";
        cin >> cl;
    }
    void display_gs(){
        son::display_s();
        cout << "School: " << school << endl;
        cout << "Class: " << cl << endl;
    }
};
int main(){
   int choice;
   cout<<"Enter 1 for grandfather, 2 for father, 3 for daughter, 4 for son, 5 for grandson: ";
   cin>>choice;
   switch(choice){
       case 1:
         {
              grandfather g;
              g.init_g();
              g.display_g();
              break;
         }
       case 2:
            {
                father f;
                f.init_f();
                f.display_f();
                break;
            }
       case 3:
            {
                daughter d;
                d.init_d();
                d.display_d();
                break;
            }
            case 4:
            {
                son s;
                s.init_s();
                s.display_s();
                break;
            }
            case 5:
            {
                grandson gs;
                gs.init_gs();
                gs.display_gs();
                break;
            }
   }
}
