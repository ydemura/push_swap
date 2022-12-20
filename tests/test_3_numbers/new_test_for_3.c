//
//  new_test_for_3.c
//  push_swap_xcode
//
//  Created by Yuliia Demura on 7/10/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//
#include "main_tests.h"

#include "new_test_for_3.h"
#include "push_swap_functions_with_write.h"
#include "test_utilities.h"

#include "handle_one-three_numbers.h"


int *provide_variations(int i)
{
    int hand_made_argv_size = 3;
    int a = 0;
    int b = 0;
    int c = 0;

    if (i == 0)
    {
        a = 1;
        b = 3;
        c = 2;
    }
    else if (i == 1)
    {
        a = 2;
        b = 1;
        c = 3;
    }
    else if (i == 2)
    {
        a = 2;
        b = 3;
        c = 1;
    }
    else if (i == 3)
    {
        a = 3;
        b = 1;
        c = 2;
    }
    else
    {
        a = 3;
        b = 2;
        c = 1;
    }
    int hand_made_argv[3] = {a, b, c};
    
    t_my_list *a_list;
    
    a_list = create_list();
    int number_counter = 0;
    for (int j = 0; j < hand_made_argv_size; j++)
    {
        push_back(a_list, hand_made_argv[j]);
        number_counter++;
    }
    
    t_my_list *b_list;
    b_list = create_list();
    
    t_data data;
    data.a = a_list;
    data.b = b_list;
    data.number_of_int_total = number_counter;
    data.hand_made_argv_ptr = hand_made_argv;
    data.ops = 0;
    
	
//	printf("for: ");
//	print_lists_numbers(data.a);
//	printf("\n");
	
	handle_three_numbers(data.a, data.b);
//	if (check_the_order(data.a) == 0)
//	{
//		printf("OK\n\n");
//	}
	if (check_the_order(data.a) == 1)
	{
		printf("______________OOOPS, ORDER IS WRONG____________\n");
		printf("check yourself: ");
		print_lists_numbers(data.a);
		
	}
    destroy_list(data.a);
    destroy_list(data.b);
    
    return 0;
}





void    new_test_numbers_3_all_variations()
{
    
    int variations_for_3_number = 5;
    int i = 0;
    
    while (i < variations_for_3_number)
    {
        provide_variations(i);
        i++;
    }

}
