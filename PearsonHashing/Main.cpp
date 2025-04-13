#include "PearsonHash.h"
#include <iostream>

int main()
{
	// Тестування
	// 1. Повторні виклики на однаковому значенні => однаковий результат

	std::vector<unsigned char> test = {'a', 'a', 'a'};
	int n = 8;

	if (PearsonHash(test, n) == PearsonHash(test, n)) std::cout << "1. Pass" << std::endl;
	else std::cout << "1. Fail" << std::endl;

	// 2. Для різних вхідних даних отримаємо різні результати

	std::vector<unsigned char> test2 = { 'b', 'b', 'b' };

	if (PearsonHash(test, n) != PearsonHash(test2, n)) std::cout << "2. Pass" << std::endl;
	else std::cout << "2. Fail" << std::endl;

	// 3. Геш функція виконується для довільних значень довільного розміру

	std::vector<unsigned char> test3 = {'c', 'c', 'c', 'c'};

	try 
	{ 
		std::cout << "Test value of hash: ";
		std::vector<unsigned char> res = PearsonHash(test3, n);
		for (unsigned char c : res) std::cout << c;
		std::cout << std::endl << "3. Pass " << std::endl;
	}
	catch (...) { std::cout << "3. Fail"; }

	return 0;
}