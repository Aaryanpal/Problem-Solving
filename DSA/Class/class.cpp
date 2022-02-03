/*
->how to create a Class
->how to create a object
->how to Access value of Class using dot(.) operator
->Specifier public and private
->using getter and setter to use outside the private class

*/
#include <iostream>
using namespace std;

class Man
{
private:
    int health = 100;
    // properties
public:
    char Family = 'F';

    int gethealth()
    {
        return health;
    }
    int sethealth(int h)
    {
        health = h;
    }
};

int main()
{
    Man M1;
    M1.sethealth(75);
    cout<<"M1 healt: "<<M1.gethealth()<<endl;
    //cout << "Health of: " << M1.health << endl;
    cout << "Family of: " << M1.Family << endl;

    
    return 0;
}