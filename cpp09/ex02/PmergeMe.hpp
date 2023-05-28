/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:16:54 by kzak              #+#    #+#             */
/*   Updated: 2023/05/28 11:00:23 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>
# include <deque>
# include <algorithm>
# include <ctime>
# include <cstdlib>

void mergeSortVector(std::vector<int>& vec);
void mergeSortList(std::list<int>& lis);

void quickSortVector(std::vector<int>& vec, int start, int end);
void quickSortList(std::list<int>& lis, int start, int end);

#endif // PMERGEME_HPP
