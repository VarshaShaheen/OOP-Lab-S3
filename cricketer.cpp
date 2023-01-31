#include <iostream>
using namespace std;

class cricketer{
protected:
    string name;
    int age;
public:
    void input(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class bowler: virtual public cricketer{
protected:
    int wickets, bowling_average;
public:
    void input_bowler(){
        cout << "Enter wickets: ";
        cin >> wickets;
        cout << "Enter bowling average: ";
        cin >> bowling_average;
    }
    void display_bowler(){
        cout << "Wickets: " << wickets << endl;
        cout << "Bowling average: " << bowling_average << endl;
    }
};

class batsman: virtual public cricketer{
protected:
    int runs, batting_average;
public:
    void input_batsman(){
        cout << "Enter runs: ";
        cin >> runs;
        cout << "Enter batting average: ";
        cin >> batting_average;
    }
    void display_batsman(){
        cout << "Runs: " << runs << endl;
        cout << "Batting average: " << batting_average << endl;
    }
};

class allrounder: public bowler, public batsman{

};

int main(){
    allrounder a;
    int choice;
    cout<<"Enter 1 for bowler, 2 for batsman, 3 for allrounder: ";
    cin>>choice;
    switch(choice){
        case 1:
            a.input();
            a.input_bowler();
            a.display();
            a.display_bowler();
            break;
        case 2:
            a.input();
            a.input_batsman();
            a.display();
            a.display_batsman();
            break;
        case 3:
            a.input();
            a.input_bowler();
            a.input_batsman();
            a.display();
            a.display_bowler();
            a.display_batsman();
            break;
    }
    return 0;
}
