#include <iostream>
#include <string>

using namespace std;

class Student
{
    public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

    //constructor: default constructor
    Student()
    {
        cout << "Student Default Constructor called" << endl;
    }

    // Behaviour/ Methods/ Functions
    void study()
    {
        cout << this->name << " Studying" << endl;
    }

    void sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }

    void bunk()
    {
        cout << this->name << " Bunking" << endl;
    }  

    //destructor
    ~Student()
    {
        cout << "Student Default Destructor called" << endl;
    }
};

int main()
{
    Student A;
    A.id = 1;
    A.age = 15;
    A.name = "Rahul";
    A.nos = 6;

    A.study();
    
    Student B;
    B.id = 1;
    B.age = 15;
    B.name = "Ramu";
    B.nos = 6;

    B.bunk();
    return 0;
}
