//
//  test_utilities.h
//  push_swap_xcode
//
//  Created by Yuliia Demura on 7/10/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#ifndef test_utilities_h
#define test_utilities_h

#include <stdio.h>
//#include "second_try_nodata.h"
//#include "algoritm_first_steps.h"
#include "push_swap_functions_with_write.h"
#include "quicksort.h"
#include "test_utilities.h"

void    print_lists_numbers(t_my_list *list);
int     print_array(int *array, int array_size);
int 	check_the_order(t_my_list *list);
int 	*generate_random_numbers(int max);

#endif /* test_utilities_h */
