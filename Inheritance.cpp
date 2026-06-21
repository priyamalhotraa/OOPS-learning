#include <iostream>
#include <string>

using namespace std;

class Vehicle // base class
{
// private: //use getname to access name when its private
//     string name;

protected: //if protected member of base class is inherited in public mode, then it will stay protected only
    string name;

// public:
     //attributes
    string model;
    int noOfTyres;

    // string getName()
    // {
    //     return this->name; // this will let you access the name even when its private
    // }

    Vehicle(string _name, string _model, int _noOfTyres) // parameterizd constructors
    {
        cout << "I am inside Vehicle constructor " << endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

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

class Car : public Vehicle //child class
{
protected:
    int noOfDoors;
    string transmissionType;

public:
    Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType):Vehicle(_name, _model, _noOfTyres)
    {
        cout << "I am inside Car constructor " << endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    void startAC()
    {
        cout << "AC has started of " << name << endl; // use getName() to access anme when name is private
    }
};

class MotorCycle : public Vehicle
{
protected:
    string handleBarStyle;
    string suspensionType;

public:
    MotorCycle(string _name, string _model, int _noOfTyres, string _handleBarStyle, string _suspensionType):Vehicle(_name, _model, _noOfTyres)
    {
        this->handleBarStyle = _handleBarStyle;
        this->suspensionType = _suspensionType;
    }

    void wheelie()
    {
        cout << "Performing wheelie " << endl;
    }
};

int main()
{
    Car A("Maruti 800", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();

    MotorCycle M("BMW", "VXI", 2, "U", "Hard");
    M.start_engine();
    M.wheelie();
    M.stop_engine();
    return 0;
}