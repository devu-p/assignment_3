// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

class Base 
{
private:
    int private_var = 1;

protected:
    int protected_var = 2;

public:
    int public_var = 3;

    int getPrivate_var()  
    {
        return private_var;
    }
};

class Derived : public Base 
{
public:
    int getProtected_var()  
    {
        return protected_var;
    }

    int getPublic_var()  
    {
        return public_var;
    }
};

int main() 
{
    Derived obj;

    cout << "Public variable: " << obj.public_var << endl;

    cout << "Protected variable: " << obj.getProtected_var() << endl;

    cout << "Private variable: " << obj.getPrivate_var() << endl;

    return 0;
}
