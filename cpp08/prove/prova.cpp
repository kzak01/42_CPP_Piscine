#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
bool easyfind(const T& container, int toFind) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), toFind);
	return it != container.end();
}

int main() {
	std::vector<int> numbers;

	for (int i = 1; i <= 10; i++) {
		numbers.push_back(i);
	}

	std::cout << "Testing with a number in the vector" << std::endl;
	if (easyfind(numbers, 1)) {
		std::cout << "Number found!" << std::endl;
	} else {
		std::cout << "No occurrence found" << std::endl;
	}

	std::cout << "Testing with a wrong number" << std::endl;
	if (easyfind(numbers, 11)) {
		std::cout << "Number found!" << std::endl;
	} else {
		std::cout << "No occurrence found" << std::endl;
	}

	return 0;
}
