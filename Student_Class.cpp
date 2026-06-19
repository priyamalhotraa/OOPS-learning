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
    int *gpa;

    //constructor: default constructor
    Student()
    {
        cout << "Student Default Constructor called" << endl;
    }

    // Parameterized constructor
    Student(int id, int age, string name, int nos, float gpa)
    {
        cout << "Student Parameterised constructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa);
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
};

int main()
{
    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Rahul";
    // A.nos = 6;

    // A.study();
    
    // Student B;
    // B.id = 1;
    // B.age = 15;
    // B.name = "Ramu";
    // B.nos = 6;

    // B.bunk();

    // Student A(1, 15, "Ranu", 6); //defined in stack
    // Student B(2, 13, "Ranu", 4);
    // Student C(3, 15, "Ram", 6);
    // Student D(4, 15, "Sham", 6);

    // cout << A.name << " " << A.age << endl;

    // A.bunk();
    // B.sleep();

    // copy constructor
    // Student C = A; // Student C(A); (can also write like this)

    // cout << C.name << " " << A.name << endl;

    // Dynamic Allocation, or Student pointer;
    Student *A = new Student(1, 14, "Bablu", 7, 9.8);//Allocated at Heap
    cout << A->name << endl;
    cout << A->age << endl;
    A->study();
    delete A; /* Destructor was not called until delete was written
                 if you are doing synamic memory allocation then you 
                 you have to delete this on your own because without delete 
                 destructor is not called */

    return 0;
}
