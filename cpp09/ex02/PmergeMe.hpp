/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:16:54 by kzak              #+#    #+#             */
/*   Updated: 2023/05/27 18:44:26 by kzak             ###   ########.fr       */
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

int partitionVector(std::vector<int>& vec, int start, int end);
void quickSortVector(std::vector<int>& vec, int start, int end);

int partitionList(std::list<int>& lis, int start, int end);
void quickSortList(std::list<int>& lis, int start, int end);

#endif // PMERGEME_HPP
