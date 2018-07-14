#include <iostream>
#include <string>

void Stop() {
	std::cin.ignore();
	std::cin.get();
}


int main() {
	int cinco = 5;

	std::cout << cinco;
	Stop();

	return 0;
}