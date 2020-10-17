// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <thread>
#include <mutex>
#include <string>
#include <time.h>
#include<iostream>
using namespace std;
std::mutex g_lock;
void Func(string name)
{
	
	
	double seconds = 0;
	long double i = 0;
	long double a = 0.000000001;
	while (seconds<1)
	{
		clock_t start = clock();
		i +=a;
		clock_t end = clock();
		seconds+= (double)(end - start) / CLOCKS_PER_SEC;


	}
	//g_lock.lock();
	std::cout << name << ": " << i << std::endl;
	//g_lock.unlock();

}

int main()
{
	for (int i = 0; i < 10000; i++)
	{


		std::thread thread1(Func, "t1");
		std::thread thread2(Func, "t2");
		std::thread thread3(Func, "t3");
		thread1.join();
		thread2.join();
		thread3.join();
	}
	system("pause");


}

