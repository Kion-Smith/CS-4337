#include "stdafx.h"

#include <iostream>
#include <chrono>

//Size of array
const int size = 100000;

//prototypes
void declareStatically();
void declareOnStack();
void declareOnHeap();

int main()
{
	//calling the functions
	declareStatically();
	declareOnStack();
	declareOnHeap();

	//keep console open
	getchar();

    return 0;
}

//For Static Decleration
void declareStatically()
{
	//Getting start time
	auto start = std::chrono::system_clock::now();

	for (int i = 0; i < 100000; i++)
	{
		static int array[size];
	}

	//getting the end time
	auto elapsed = std::chrono::system_clock::now() - start;

	//Convert endtTime to long so I can outprint to console
	long long endTime = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	std::cout << "For a static declaration::" << endTime << " microseconds" << std::endl;
	
}

//For Stack Decleration
void declareOnStack()
{
	//Getting start time
	auto start = std::chrono::system_clock::now();

	for (int i = 0; i < 100000; i++)
	{
		int array[size];
	}

	//getting the end time
	auto elapsed = std::chrono::system_clock::now() - start;

	//Convert endtTime to long so I can outprint to console
	long long endTime = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	std::cout << "For a stack declaration::" << endTime << " microseconds" << std::endl;
	
}
//For Heap Decleration
void declareOnHeap()
{
	//Getting start time
	auto start = std::chrono::system_clock::now();
	for (int i = 0; i < 100000; i++)
	{
		int *arrayPtr = new int[size];
		//need to delete for memory reasons, crashes otherwise
		delete arrayPtr;
	}
	//getting the end time
	auto elapsed = std::chrono::system_clock::now() - start;
	//Convert endtTime to long so I can outprint to console
	long long endTime = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	std::cout << "For a heap declaration::" << endTime << " microseconds" << std::endl;

}



