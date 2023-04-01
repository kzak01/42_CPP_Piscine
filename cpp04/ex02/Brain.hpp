/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:29:58 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 18:36:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	protected:
		std::string		_ideas[100];

	public:
		Brain();
		Brain( const Brain &other );
		~Brain();
		Brain &operator=( const Brain &other );

};

#endif
