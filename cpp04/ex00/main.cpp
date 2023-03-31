/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:53:49 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 14:40:41 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[32m" << "\nCreating Animal Classes\n" << "\033[0m" << std::endl;
	const Animal* meta = new Animal();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	const Animal* j = new Dog();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	const Animal* i = new Cat();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	const WrongAnimal* wrong_cat = new WrongCat;

	std::cout << "\033[32m" << "\nDisplaing varius type\n" << "\033[0m" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	std::cout << wrong_animal->getType() << " " << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;

	std::cout << "\033[32m" << "\nMaking sounds\n" << "\033[0m" << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	j->makeSound();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	meta->makeSound();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	wrong_animal->makeSound();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	wrong_cat->makeSound();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;

	std::cout << "\033[32m" << "\nDeleting Animal Classes\n" << "\033[0m" << std::endl;
	delete(meta);
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	delete(i);
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	delete(j);
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	delete(wrong_animal);
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	delete(wrong_cat);
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	return 0;
}
