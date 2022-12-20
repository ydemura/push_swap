//
//  test_main_algoritm.c
//  push_swap_xcode
//
//  Created by Julia on 08.07.2021.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "test_main_algoritm.h"
#include "second_try_nodata.h"
#include "push_swap_functions_with_write.h"
#include "algoritm_first_steps.h"
#include "test_3_numbers.h"
#include "new_test_for_3.h"
#include "test_5_numbers.h"

#include <stdio.h>
#include <stdlib.h>


void	swap_two_integers(int *array, int one, int two)
{
	int temp;
	
	temp = array[one];
	array[one] = array[two];
	array[two] = temp;
}

int *generate_random_numbers(int max)
{
	int *final_array;
	
	final_array = malloc(sizeof(int) * max);
	
	int i = 0;
	
	while (i < max)
	{
		final_array[i] = i;
		i++;
	}
	
	i = 0;
	int k = 0;
	int j = 0;
	
	while (i < max)
	{
		if (k < max - 2)
			k += 2;
		else if (k > 6)
			k -= 6;
		swap_two_integers(final_array, i, k);
		if (j < max - 4)
			j += 4;
		else if (j > 1)
			j--;
		swap_two_integers(final_array, i, j);
		i++;
	}
//	i = 0;
//	while (i < max)
//	{
//		printf("%i ", final_array[i]);
//		i++;
//	}
	return (final_array);
}




void	test_3_numbers()
{
	int hand_made_argv[3] = {2, 1, 0};
	int hand_made_argv_size = 3;

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
	
//	offer_mediana_call_sorting(&data);
	
	destroy_list(data.a);
	destroy_list(data.b);
}


void	test_5_numbers()
{

	int hand_made_argv[10] = {1, 3, 0, 5, -2};
	int hand_made_argv_size = 5;
	
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
		
//	offer_mediana_call_sorting(&data);
	
	destroy_list(data.a);
	destroy_list(data.b);
}

void	test_8_numbers()
{
	int hand_made_argv_size = 8;
	int *hand_made_argv = generate_random_numbers(hand_made_argv_size);
	
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
		
//	offer_mediana_call_sorting(&data);
	
	destroy_list(data.a);
	destroy_list(data.b);
}

void	test_13_numbers()
{
	int hand_made_argv_size = 13;
	int hand_made_argv[13] = {5, 0, 1, 12, 4, 6, 8, 9, 3, 17, 10, 16, 7};
	
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
		
//	offer_mediana_call_sorting(&data);
	
	destroy_list(data.a);
	destroy_list(data.b);
}



void	test_20_numbers()
{
	int hand_made_argv_size = 20;
	int *hand_made_argv = generate_random_numbers(hand_made_argv_size);
	
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
		
//	offer_mediana_call_sorting(&data);
	
	destroy_list(data.a);
	destroy_list(data.b);
}





void	test_100_numbers()
{
	int hand_made_argv_size = 100;
	int *hand_made_argv = generate_random_numbers(hand_made_argv_size);
	
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
		
//	offer_mediana_call_sorting(&data);
	
	destroy_list(data.a);
	destroy_list(data.b);
}


void    test_500_numbers()
{
    int hand_made_argv_size = 500;
    int *hand_made_argv = generate_random_numbers(hand_made_argv_size);
    
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
        
//    offer_mediana_call_sorting(&data);
    
    destroy_list(data.a);
    destroy_list(data.b);
}


#include "new_test_for_3.h"

void	test_main_algoritm()
{
//    new_test_numbers_3_all_variations();
 //   new_test_numbers_5_all_variations();
    
    
//	test_3_numbers();
//	test_5_numbers();
//	test_8_numbers();
//	test_13_numbers();
	
//	test_20_numbers(); // 80 ops

	
//	test_100_numbers();
//    test_500_numbers();
}
