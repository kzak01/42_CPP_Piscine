/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:19:04 by kzak              #+#    #+#             */
/*   Updated: 2023/05/10 16:22:03 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data {
	private:
		int _value;

	public:
		Data();
		Data( int value );
		Data( const Data& other );
		~Data();
		Data& operator=( const Data& other );

		int getValue() const;
};

#endif
