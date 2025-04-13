#include "PearsonHash.h"
#include <iostream>

int main()
{
	// ����������
	// 1. ������� ������� �� ���������� ������� => ��������� ���������

	std::vector<unsigned char> test = {'a', 'a', 'a'};
	int n = 8;

	if (PearsonHash(test, n) == PearsonHash(test, n)) std::cout << "1. Pass" << std::endl;
	else std::cout << "1. Fail" << std::endl;

	// 2. ��� ����� ������� ����� �������� ��� ����������

	std::vector<unsigned char> test2 = { 'b', 'b', 'b' };

	if (PearsonHash(test, n) != PearsonHash(test2, n)) std::cout << "2. Pass" << std::endl;
	else std::cout << "2. Fail" << std::endl;

	// 3. ��� ������� ���������� ��� �������� ������� ��������� ������

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