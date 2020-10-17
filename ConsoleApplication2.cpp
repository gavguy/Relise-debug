
#include "stdafx.h"
#include <time.h>
#include<iostream>
int main()
{

	clock_t start = clock();
	int k = 10;
	
	for (int i = 0; i < 10000000; i++)
	{
		int m = 1;
		for  (int j = 1; j <=k; j++)
		{
			m *= j;
		}
	}
	clock_t end = clock();
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	std::cout << seconds;
	system("pause");
}

