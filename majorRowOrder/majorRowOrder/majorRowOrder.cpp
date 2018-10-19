#include "stdafx.h"
#include <iostream>

//Creating a 3D Array
int myArray[3][3][3] =
{{  { 1,   2,  3 },{ 4,  5,  6},{ 7,  8,  9 } },
{ { 10, 11, 12 },{ 13, 14, 15 },{ 16, 17, 18 } },
{ { 19, 20, 21 },{ 22, 23, 24 },{ 25, 26, 27 } } 
};

//prototype
int* getIndexAddress(int x, int y, int z);

int main()
{
	//looping through the array
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				//getting the addresses
				std::cout << "Derefrecned version ("<<&myArray[i][j][k]  << "), Major row fucntion ("<< getIndexAddress(i,j,k) <<")" <<std::endl;
				
			}
		}
	}
	//make sure the program dosent close
	getchar();

    return 0;
}

int* getIndexAddress(int x, int y, int z)
{
	int *startPtr = &myArray[0][0][0];

	// array[x][y][z] = array address + (x*sizeOfCols*Depth+y*Depth+z)
	return (startPtr + x * 3 * 3 + y * 3 + z);

}

