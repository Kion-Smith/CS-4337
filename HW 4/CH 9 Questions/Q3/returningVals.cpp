#include <iostream>

//setting the size of all the arrays
const int SIZE = 5;
//creating the template to make generic function
template <typename type>
//type is generic template; could have also used auto but my complier does not like when I do that
int searchForScalar(type array[], type scalar)
{
    for(int i =0;i<SIZE;i++)
    {
        if(array[i] == scalar)
        {
            return i;
        }

    }
    return -1;
}

int main()
{
    //creating array of ints
    int array[] = {1,2,3,4,5,6};
    float Farray[] = {3.2 ,4.999,2.21, 10.0,5.0, 1.343431};

    //int tests
    int scalar = 10;
    std::cout<< "The index of the scalar in the array is " <<searchForScalar(array,scalar) << std::endl;
    scalar = 5;
    std::cout<< "The index of the scalar in the array is " <<searchForScalar(array,scalar) << std::endl;

    //float tests
    float Fscalar = 10;
    std::cout<< "The index of the scalar in the array is " <<searchForScalar(Farray,Fscalar) << std::endl;
    Fscalar = 20;
    std::cout<< "The index of the scalar in the array is " <<searchForScalar(Farray,Fscalar) << std::endl;



    return 0;
}


