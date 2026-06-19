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

private:
    int *gpa;
    string phone;

public:
    //constructor: default constructor
    Student()
    {
        cout << "Student Default Constructor called" << endl;
    }

    // Parameterized constructor
    Student(int id, int age, string name, int nos, float gpa, string phone)
    {
        cout << "Student Parameterised constructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa);
        this->phone = phone;
    }

    // Copy constructor - copying values from one object to other object
    Student(const Student &srcobj) // const - so value doesnt change, Student -  copying from student, &srcobj - passing by reference from srcobj => A
    {
        cout << "Student Copy constructor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
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
        delete this->gpa; //avoids memory leaks
    }

private: 
    void chatting()
    {
        cout << this->name << " chatting on phone" << endl;
    }
    
};

int main()
{
    Student A(1, 12, "Ramu", 5, 7.8, "Samsung");

    cout << A.age << endl; // can be accesed beacuse it is public 
    // cout <<A.phone << endl; // cannot be accesed beacuse it is private 
    // A.chatting(); // cannot be accesed beacuse it is private
    A.sleep(); //accesible because it is public

    return 0;
}
