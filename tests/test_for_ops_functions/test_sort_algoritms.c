//
//  test_sort_algoritms.c
//  push_swap_xcode
//
//  Created by Julia on 11.06.2021.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "test_sort_algoritms.h"
#include "quicksort.h"
#include <stdlib.h>
#include <assert.h>

void test_quicksort(void)
{
	int array[7] = {3, 5, 6, 7, 2, 1, 4};
	int *sorted_array;
	
	sorted_array = quicksort(array, 0, 6);
	int i = -1;
	while (i++ < 6)
	{
		assert(sorted_array[i] == i + 1);
	}
	
	int array2[7] = {-10, 0, 223456, -118, 333, 1, 2};
	sorted_array = quicksort(array2, 0, 6);
	assert(sorted_array[0] == -118);
	assert(sorted_array[1] == -10);
	assert(sorted_array[2] == 0);
	assert(sorted_array[3] == 1);
	assert(sorted_array[4] == 2);
	assert(sorted_array[5] == 333);
	assert(sorted_array[6] == 223456);
}


//void test_merge_sort(void)
//{
//    int array[8] = {4, 3, 2, 1, 5, 6, 7, 8};
//    int *sorted_array;
//    sorted_array = 0;
//    merge_sort(array, 0, 4);
//    sorted_array = array;
//    int i = -1;
//    while (i++ < 6)
//    {
//        assert(sorted_array[i] == i + 1);
//    }
//
//    int array2[7] = {-10, 0, 223456, -118, 333, 1, 2};
//    merge_sort(array2, 0, 6);
//    sorted_array = array2;
//    assert(sorted_array[0] == -118);
//    assert(sorted_array[1] == -10);
//    assert(sorted_array[2] == 0);
//    assert(sorted_array[3] == 1);
//    assert(sorted_array[4] == 2);
//    assert(sorted_array[5] == 333);
//    assert(sorted_array[6] == 223456);
//}
