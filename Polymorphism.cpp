#include <iostream>

using namespace std;

class Add {
    public:
    
    //static polymorphism (compile time polymorphism)

    // x, y, two int addition
    int sum(int x, int y)
    {
        return x + y;
    }

    // x, y, z, three int add
    int sum(int x, int y, int z)
    {
        return x + y + z;
    }

    // double add
    double sum(double x, double y)
    {
        return x + y;
    }

};

int main() 
{
    int x = 5, y = 5;
    int z = 2;

    Add add;
    cout << add.sum(x, y)
    return 0;
}