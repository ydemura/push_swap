//
//  main_tests.h
//  push_swap_xcode
//
//  Created by Yuliia Demura on 6/9/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#ifndef main_tests_h
#define main_tests_h

#include <stdio.h>
#include "test_my_list.h"
//#include "test_3_numbers.h"
//#include "test_main_algoritm.h"
//#include "second_try_nodata.h"
#include "push_swap_functions_with_write.h"
//#include "algoritm_first_steps.h"
//#include "test_3_numbers.h"
#include "new_test_for_3.h"
#include "test_5_numbers.h"


typedef struct  s_data
{
	int number_of_int_total;
	t_error_handling err;
	t_identifier identifier;
	t_my_list *a;
	t_my_list *b;
	int *hand_made_argv_ptr;
	int ops;
}               t_data;

void    start_test(void);

#endif /* main_tests_h */
