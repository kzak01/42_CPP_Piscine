/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:25:27 by kzak              #+#    #+#             */
/*   Updated: 2023/02/18 19:05:23 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& other );
		~ScavTrap();
		ScavTrap& operator=( const ScavTrap& other );

		void	attack(const std::string& target) const;
		void	guardGate();

};

#endif
