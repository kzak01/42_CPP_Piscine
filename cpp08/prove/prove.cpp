#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperator;

int main() {
	std::list<int>						lst1;
	// std::map<std::string, IOperator*>	map1;
	std::vector<int>					v1;
	std::vector<double>					v2(42, 1);

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

	// map1["opA"] = new OperationA;
	// map1["opB"] = new OperationB;

	std::list<int>::const_iterator		it;
	std::list<int>::const_iterator		ite = lst1.end();

	std::cout << "vector: " << v2[41] << std::endl;

	for (it = lst1.begin(); it != ite; ++it) {
		std::cout << *it << std::endl;
	}

	return 0;
}
