#include <iostream>

//prototypes
void passByValue(int);
void passByReference(int&);

int main()
{

    //seting the int variable
    int valNum = 10;
    passByValue(valNum);
    //getting the value of valnum now
    std::cout<<"Pass by value the num is "<< valNum << std::endl;

    //setting variable name
    int refNum = 10;
    passByReference(refNum);
    //getting the value of refnum now
    std::cout<<"Pass by reference the num is "<< refNum << std::endl;

    return 0;
}

//passing by value
void passByValue(int n)
{
    n*=2;
}
//passing by reference
void passByReference(int &n)
{
    n*=3;
}
