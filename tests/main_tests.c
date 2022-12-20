//
//  main_tests.c
//  push_swap_xcode
//
//  Created by Yuliia Demura on 6/9/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "main_tests.h"
#include "test_utilities.h"
#include "my_list.h"
#include "create_int_arry_from_argv.h"
#include "push_swap_functions_with_write.h"

#include "quicksort.h"
#include "test_sort_algoritms.h"
#include "test_handle_100_numb.h"


#include <assert.h>
#include <stdlib.h>
#include "push_swap_functions_with_write.h"
#include "handle_one-three_numbers.h"
#include "handle_five_numbers.h"
#include "handle_100_numbers.h"

//#include "test_main_algoritm.h"
#include "push_swap.h"

const char **make_arvg_20(int argc)
{
	const char **argv;

	argv = malloc(sizeof(char *) * argc);
//	char *str = malloc(sizeof(char));
//	str = "1";
	argv[0] = "push_swap";
	argv[1] = "2";
	argv[2] = "18";
	argv[3] = "27";
	argv[4] = "31";
	argv[5] = "38";
	argv[6] = "12";
	argv[7] = "16";
	argv[8] = "7";
	argv[9] = "4";
	argv[10] = "89";
	argv[11] = "40";
	argv[12] = "1";
	argv[13] = "19";
	argv[14] = "33";
	argv[15] = "24";
	argv[16] = "56";
	argv[17] = "26";
	argv[18] = "11";
	argv[19] = "65";
	argv[20] = "15";
	return (argv);
}

const char **make_arvg_6(int argc)
{
	const char **argv;

	argv = malloc(sizeof(char *) * argc);
//	char *str = malloc(sizeof(char));
//	str = "1";
	argv[0] = "push_swap";
	argv[1] = "18";
	argv[2] = "38";
	argv[3] = "-38";
	argv[4] = "40";
	argv[5] = "41";
	argv[6] = "20";
	return (argv);
}

//18 38 -38 40 41 20

void    start_test()
{
    printf("start test\n\n");
	
	t_input input;
	t_error_handling err;

//	if (argc < 2) 	///	get rid of empty int list here
//		return (0);
	
	
	//test for segfault
	int argc;
	const char **argv;
	
	argc = 20 + 1;
	argv = make_arvg_20(argc);
	free(argv);
	
	argc = 6 + 1;
	argv = make_arvg_6(argc);
	
	argv++; // push_swap argv[0]
	input.array_size = argc - 1; // 1 is push_swap argv[0]
	input.argv_ptr = argv;
	
	
	input.a = create_list();
	input.b = create_list();
	if (form_array_int(&input) != OK || form_a_list(input.a, input.array, input.array_size) != OK)
		write_error_message(ERR);
	
	err = sort_depend_on_size(&input);
	if (err != OK)
		write_error_message(ERR);
	
	if (check_the_order(input.a) == 0)
	{
		printf("OK\n\n");
	}
	if (check_the_order(input.a) == 1)
	{
		printf("______________OOOPS, ORDER IS WRONG____________\n");
		printf("check yourself: ");
		print_lists_numbers(input.a);
		
	}
	
	
	//at the end
	destroy_list(input.a);
	destroy_list(input.b);
	free(input.array);
	
	
	new_test_numbers_3_all_variations();
	new_test_numbers_5_all_variations();

	test_diff_numbers();
    
    printf("end test\n\n");
}












//command to test checker
//bash-3.2$ ARG="2 1"; ./checker_MAC $ARG
//sa
//OK


//ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
