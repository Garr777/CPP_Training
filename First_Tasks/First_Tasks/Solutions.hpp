#pragma once
#include<iostream>


void Print1()
{
	std::cout << "Three blind mice" << std::endl;
}
void Print2()
{
	std::cout << "See how they run" << std::endl;
}
void PrintTime(int hours, int mins)
{
	std::cout << "Time : " << hours << ":" << mins << std::endl;
}


namespace fts
{
	
	void task1()
	{
		std::cout << "My name is Rishat and I from Almetyevsk";
	}

	void task2()
	{
		std::cout << "Print distance in farlongs : ";
		int farlongs;
		std::cin >> farlongs;
		std::cout << farlongs <<" farlongs = "<< farlongs * 220 << " yards";
		
	}

	void task3()
	{
		Print1();
		Print1();
		Print2();
		Print2();
	}

	void task4()
	{
		std::cout << "Enter your age : ";
		int age;
		std::cin >> age;
		std::cout << "Your age in months is " << age * 12 << std::endl;
	}

	void task5()
	{
		std::cout << "Please, enter a Celisius value : ";
		int temp;
		std::cin >> temp;
		std::cout << temp << " degrees in Celisius is " << temp * 1.8 + 32 << " degrees in Fahrenheit.";
	}

	void task6()
	{
		std::cout << "Enter the number of light years : ";
		double lightYears;
		std::cin >> lightYears;
		std::cout << lightYears << " lightyears = " << lightYears * 63240 << " astronomics units.";
	}

	void task7()
	{
		std::cout << "Enter a number of hours : ";
		int hours, mins;
		std::cin >> hours;
		std::cout << "Enter a number of minutes : ";
		std::cin >> mins;
		PrintTime(hours, mins);
	}

}
