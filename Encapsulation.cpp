#include <iostream>
#include <string>

using namespace std;

class Student
{
private: //for perfect encapsulation that means all the attributes are hidden
//public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

private:
    float *gpa; // dynamic alloaction
    string phone;

public:

    void setGpa(float a)
    {
        // layer of authentication
        *this->gpa = a;
    }

    float getGpa() const
    {
        return *this->gpa;
    }

    float getAge() const
    {
        return this->age;
    }

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
        this->gpa = new float(gpa);
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

    // cout << A.age << endl; // can be accesed beacuse it is public 
    // // cout <<A.phone << endl; // cannot be accesed beacuse it is private 
    // // A.chatting(); // cannot be accesed beacuse it is private
    // A.sleep(); //accesible because it is public

    cout << A.getGpa() << endl;
    A.setGpa(6.7);

    cout << A.getGpa() << endl;

    cout << A.getGpa() << endl;

    return 0;
}
