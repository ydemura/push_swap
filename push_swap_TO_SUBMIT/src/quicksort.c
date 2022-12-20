/*
	quicksort.c
	push_swap_xcode

	Created by Julia on 11.06.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "quicksort.h"
#include <stdlib.h>

void	swap_by_indexes(int *array, int i, int j)
{
	int	temp_for_number;

	temp_for_number = array[i];
	array[i] = array[j];
	array[j] = temp_for_number;
}

int	partation_fixing_the_order(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap_by_indexes(arr, i, j);
		}
		j++;
	}
	swap_by_indexes(arr, i + 1, high);
	return (i + 1);
}

int	*quicksort(int *arr, int low, int high)
{
	int	index_of_pivot;

	if (low < high)
	{
		index_of_pivot = partation_fixing_the_order(arr, low, high);
		quicksort(arr, low, index_of_pivot - 1);
		quicksort(arr, index_of_pivot + 1, high);
	}
	return (arr);
}
