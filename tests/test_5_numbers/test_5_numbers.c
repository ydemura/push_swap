//
//  test_5_numbers.c
//  push_swap_xcode
//
//  Created by Yuliia Demura on 7/10/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "test_5_numbers.h"
#include "push_swap_functions_with_write.h"
#include "handle_five_numbers.h"
#include "test_utilities.h"
#include "main_tests.h"


int provide_variations_for_5(int i)
{
    int hand_made_argv_size = 5;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    if (i == 0)
    {
        a = 3;
        b = 1;
        c = 5;
        d = 4;
        e = 2;
    }
    else if (i == 1)
    {
        a = 5;
        b = 2;
        c = 1;
        d = 4;
        e = 3;
    }
    else if (i == 2)
    {
        a = 1;
        b = 3;
        c = 5;
        d = 2;
        e = 4;
    }
    else if (i == 3)
    {
        a = 5;
        b = 4;
        c = 3;
        d = 2;
        e = 1;
    }
    else if (i == 4)
    {
        a = 4;
        b = 1;
        c = 5;
        d = 2;
        e = 3;
    }
    else if (i == 5)
    {
        a = 2;
        b = 5;
        c = 1;
        d = 3;
        e = 4;
    }
    else if (i == 6)
    {
        a = 2;
        b = 5;
        c = 3;
        d = 1;
        e = 4;
    }
    else if (i == 7)
    {
        a = 1;
        b = 5;
        c = 3;
        d = 2;
        e = 4;
    }
    else if (i == 8)
    {
        a = 5;
        b = 2;
        c = 4;
        d = 3;
        e = 1;
    }
    int hand_made_argv[5] = {a, b, c, d, e};
    
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
	handle_five_numbers(data.a, data.b);
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
    
    return (1);
}

void    new_test_numbers_5_all_variations()
{
    
    int variations_for_3_number = 9;
    int i = 0;
    
    while (i < variations_for_3_number)
    {
//		printf("%i\n", i);
		i += provide_variations_for_5(i);
    }

}
