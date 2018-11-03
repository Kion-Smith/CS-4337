// HW 4 Q2 (multiple selection).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int j = 0;
	int k = 0;

	if (k == 1 || k == 2)
	{
		j = 2 * k - 1;
	}
	else if (k == 3 || k == 5)
	{
		j = 3 * k + 1;
	}
	else if (k == 4)
	{
		j = 4 * k - 1;
	}
	else if (k == 6 || k == 7 || k == 8)
	{
		j = k - 2;
	}

    return 0;
}

