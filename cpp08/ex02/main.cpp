/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:52:53 by kzak              #+#    #+#             */
/*   Updated: 2023/05/19 15:34:58 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// My main
// void printGreenMessage(const std::string& message) {
// 	std::cout << "\033[1;32m" << message << "\033[0m" << std::endl;
// }

// int main() {
// 	MutantStack<int, std::list<int>> mstack;

// 	printGreenMessage("Checking if the stack is empty: ");
// 	std::cout << mstack.empty() << std::endl;

// 	mstack.push(5);
// 	mstack.push(17);
// 	mstack.push(42);
// 	mstack.push(9);

// 	printGreenMessage("\nPrinting elements in the stack:");
// 	for (MutantStack<int, std::list<int>>::const_iterator it = mstack.begin(); it != mstack.end(); ++it)
// 		std::cout << *it << " ";
// 	std::cout << std::endl;

// 	printGreenMessage("\nStack size: ");
// 	std::cout << mstack.size() << std::endl;

// 	printGreenMessage("\nAccessing the top element of the stack: ");
// 	std::cout << mstack.top() << std::endl;

// 	mstack.pop();

// 	printGreenMessage("\nNew stack size after removing top element: ");
// 	std::cout  << mstack.size() << std::endl;

// 	printGreenMessage("\nPrinting new stack:");
// 	for (MutantStack<int, std::list<int>>::const_iterator it = mstack.begin(); it != mstack.end(); ++it)
// 		std::cout << *it << " ";
// 	std::cout << std::endl;

// 	printGreenMessage("\nChecking if the stack is empty: ");
// 	std::cout << mstack.empty() << std::endl;

// 	return 0;
// }

// Main list
// int main()
// {
// std::list<int> mstack;
// mstack.push_back(5);
// mstack.push_back(17);
// std::cout << "back: "<< mstack.back() << std::endl;
// mstack.pop_back();
// std::cout << "size: " << mstack.size() << std::endl;
// mstack.push_back(3);
// mstack.push_back(5);
// mstack.push_back(737);
// //[...]
// mstack.push_back(0);
// std::list<int>::iterator it = mstack.begin();
// std::list<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << "- " << *it << std::endl;
// ++it;
// }
// std::list<int> s(mstack);
// return 0;
// }


// Main subject
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << "Top: "<< mstack.top() << std::endl;
mstack.pop();
std::cout << "size: " << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << "- " << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0;
}

