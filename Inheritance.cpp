#include <iostream>
#include <string>

using namespace std;

class Vehicle // base class
{
private:
    string name; //attributes
    string model;
    int noOfTyres;

public:
    void start_engine() //behaviours
    {
        cout << "Engine is starting " << name << " " << model << endl;
    }

    void stop_engine()
    {
        cout << "Engine is stopping " << name << " " << model << endl;
    }
};

int main()
{
    return 0;
}