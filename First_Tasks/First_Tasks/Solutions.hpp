#pragma once
#include<iostream>
#include<limits>

void Print1()
{
	std::cout << "Three blind mice" << std::endl;
}
void Print2()
{
	std::cout << "See how they run" << std::endl;
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

	}

	void task6()
	{

	}

	void task7()
	{

	}

}
