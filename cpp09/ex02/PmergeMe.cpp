/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:43:49 by kzak              #+#    #+#             */
/*   Updated: 2023/05/28 11:08:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//-------------------------------Vector merge-insertionSort-------------------

void insertionSortVector(std::vector<int>& vec) {
	// Insertion sort algorithm for the vector
	for (int i = 1; i < vec.size(); i++) {
		int key = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] > key) {
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

void mergeVector(std::vector<int>& vec, int start, int mid, int end) {
	// Merge two sorted subvectors into a single sorted vector
	std::vector<int> left(vec.begin() + start, vec.begin() + mid + 1);
	std::vector<int> right(vec.begin() + mid + 1, vec.begin() + end + 1);

	int i = 0, j = 0, k = start;
	while (i < left.size() && j < right.size()) {
		if (left[i] <= right[j]) {
			vec[k] = left[i];
			i++;
		} else {
			vec[k] = right[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of the left vector, if any
	while (i < left.size()) {
		vec[k] = left[i];
		i++;
		k++;
	}
	// Copy the remaining elements of the right vector, if any
	while (j < right.size()) {
		vec[k] = right[j];
		j++;
		k++;
	}
}

void mergeSortVectorHelper(std::vector<int>& vec, int start, int end, int threshold) {
	if (start < end) {
		if (end - start + 1 <= threshold) {
			// Switch to insertion sort for small subvectors
			insertionSortVector(vec);
		} else {
			int mid = start + (end - start) / 2;
			// Recursively sort the left and right subvectors
			mergeSortVectorHelper(vec, start, mid, threshold);
			mergeSortVectorHelper(vec, mid + 1, end, threshold);
			// Merge the sorted subvectors
			mergeVector(vec, start, mid, end);
		}
	}
}

void mergeSortVector(std::vector<int>& vec) {
	int threshold = 10;// Threshold value for when to switch to insertion sort
	// Call the helper function to perform merge sort on the vector
	mergeSortVectorHelper(vec, 0, vec.size() - 1, threshold);
}

//-------------------------------List merge-insertionSort---------------------

void insertionSortList(std::list<int>& lis) {
	// Insertion sort algorithm for the list
	for (std::list<int>::iterator it = lis.begin(); it != lis.end(); it++) {
		std::list<int>::iterator j = it;
		while (j != lis.begin() && *std::prev(j) > *j) {
			std::iter_swap(j, std::prev(j));
			j--;
		}
	}
}

void mergeList(std::list<int>& lis, int start, int mid, int end) {
	// Merge two sorted sublists into a single sorted list
	std::list<int> left(std::next(lis.begin(), start), std::next(lis.begin(), mid + 1));
	std::list<int> right(std::next(lis.begin(), mid + 1), std::next(lis.begin(), end + 1));

	std::list<int>::iterator i = left.begin();
	std::list<int>::iterator j = right.begin();
	std::list<int>::iterator k = std::next(lis.begin(), start);

	while (i != left.end() && j != right.end()) {
		if (*i <= *j) {
			*k = *i;
			i++;
		} else {
			*k = *j;
			j++;
		}
		k++;
	}
	// Copy the remaining elements of the left list, if any
	while (i != left.end()) {
		*k = *i;
		i++;
		k++;
	}
	// Copy the remaining elements of the right list, if any
	while (j != right.end()) {
		*k = *j;
		j++;
		k++;
	}
}

void mergeSortListHelper(std::list<int>& lis, int start, int end, int threshold) {
	if (start < end) {
		if (end - start + 1 <= threshold) {
			// Switch to insertion sort for small sublist
			insertionSortList(lis);
		} else {
			int mid = start + (end - start) / 2;
			// Recursively sort the left and right sublist
			mergeSortListHelper(lis, start, mid, threshold);
			mergeSortListHelper(lis, mid + 1, end, threshold);
			// Merge the sorted sublist
			mergeList(lis, start, mid, end);
		}
	}
}

void mergeSortList(std::list<int>& lis) {
	int threshold = 10; // Threshold value for when to switch to insertion sort
	// Call the helper function to perform merge sort on the vector
	mergeSortListHelper(lis, 0, lis.size() - 1, threshold);
}

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
