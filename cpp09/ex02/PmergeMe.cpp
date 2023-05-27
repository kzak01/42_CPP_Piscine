/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:43:49 by kzak              #+#    #+#             */
/*   Updated: 2023/05/27 18:58:46 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//-------------------------------Vector quickSort-------------------

// Function to partition the vector for quicksort
int partitionVector(std::vector<int>& vec, int start, int end) {
	int pivot = vec[start];

	// Count the number of elements less than or equal to the pivot
	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (vec[i] <= pivot)
			count++;
	}

	// Calculate the index of the pivot element after partitioning
	int pivotIndex = start + count;
	std::swap(vec[pivotIndex], vec[start]);

	int i = start, j = end;
	// Move elements smaller than the pivot to the left and elements
	// greater than the pivot to the right
	while (i < pivotIndex && j >= pivotIndex) {
		while (i < pivotIndex && vec[i] <= pivot)
			i++;
		while (vec[j] > pivot)
			j--;
		if (i < pivotIndex && j >= pivotIndex)
			std::swap(vec[i++], vec[j--]);
	}
	return pivotIndex;
}

// Function to perform quicksort on the vector
void quickSortVector(std::vector<int>& vec, int start, int end) {
	if (start >= end)
		return;

	// Partition the vector and recursively sort the subarrays
	int pivot = partitionVector(vec, start, end);
	quickSortVector(vec, start, pivot - 1);
	quickSortVector(vec, pivot + 1, end);
}

//-------------------------------List quickSort---------------------

// Function to partition the list for quicksort
int partitionList(std::list<int>& lis, int start, int end) {
	int pivot = *std::next(lis.begin(), start);

	// Count the number of elements less than or equal to the pivot
	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (*std::next(lis.begin(), i) <= pivot)
			count++;
	}

	// Calculate the iterator to the pivot element after partitioning
	int pivotIndex = start + count;
	std::list<int>::iterator pivotIt = std::next(lis.begin(), pivotIndex);
	std::iter_swap(pivotIt, std::next(lis.begin(), start));

	std::list<int>::iterator i = std::next(lis.begin(), start), j = std::next(lis.begin(), end);
	// Move elements smaller than the pivot to the left and elements
	// greater than the pivot to the right
	while (i != pivotIt && j != pivotIt) {
		while (i != pivotIt && *std::next(i) <= pivot)
			i++;
		while (*std::next(j) > pivot)
			j--;
		if (i != pivotIt && j != pivotIt)
			std::iter_swap(i++, j--);
	}
	return pivotIndex;
}

// Function to perform quicksort on the list
void quickSortList(std::list<int>& lis, int start, int end) {
	if (start >= end)
		return;

	// Partition the list and recursively sort the sublists
	int pivot = partitionList(lis, start, end);
	quickSortList(lis, start, pivot - 1);
	quickSortList(lis, pivot + 1, end);
}
