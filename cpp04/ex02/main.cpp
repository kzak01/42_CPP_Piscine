/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:53:49 by kzak              #+#    #+#             */
/*   Updated: 2023/04/01 17:49:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	Animal *cat_dog[6];
	for (int i = 0; i < 6; i++) {
		if (i % 2){
			cat_dog[i] = new Cat();
		}
		else {
			cat_dog[i] = new Dog();
		}
	}

	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	for (int i = 0; i < 6; i++)
		cat_dog[i]->makeSound();

	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	for (int i = 0; i < 6; i++)
		delete(cat_dog[i]);

	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }

	return(0);
}
