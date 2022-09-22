#include <random>
#include <time.h>
#include <iostream>

int main27()
{
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> dis(0, 4);

	for (int i = 0; i < 5; i++)
		std::cout << "Random num : " << dis(gen) << std::endl;

	
	return 0;
}