#include<iostream>
#include"Solutions.hpp"

using std::cout;

int main() {
	std::cout << "Enter a number of task (0 - 7) : ";
	int a;
	std::cin >> a;
	switch (a)
	{
		case 1:
		{
			fts::task1();
		}break;
		case 2:
		{
			fts::task2();
		}break;
		case 3:
		{
			fts::task3();
		}break;
		case 4:
		{
			fts::task4();
		}break;
		case 5:
		{
			fts::task5();
		}break;
		case 6:
		{
			fts::task6();
		}break;
		case 7:
		{
			fts::task7();
		}break;
		default:
		{
			std::cout << "Exception: enter wrong number";
		}
	}
	return 0;
}