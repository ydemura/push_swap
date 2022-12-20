//
//  test_handle_100_numb.c
//  push_swap_xcode
//
//  Created by Julia on 13.07.2021.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "test_handle_100_numb.h"
#include "handle_100_numbers.h"
#include "push_swap_functions_with_write.h"
#include "test_utilities.h"
#include <stdlib.h>
#include "main_tests.h"


int provide_variations_for_diff(int i)
{
	int hand_made_argv_size = 5;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int l = 0;

	if (i == 0)
	{
		a = 3;
		b = 1;
		c = 5;
		d = 4;
		e = 2;
		f = 6;
		hand_made_argv_size = 6;
	}
	else if (i == 1)
	{
		a = 5;
		b = 2;
		c = 1;
		d = 4;
		e = 3;
		f = 6;
		j = 7;
		hand_made_argv_size = 7;
	}
	else if (i == 2)
	{
		a = 1;
		b = 3;
		c = 5;
		d = 2;
		e = 4;
		f = 8;
		j = 7;
		k = 6;
		hand_made_argv_size = 8;
	}
	else if (i == 3)
	{
		a = 1;
		b = 9;
		c = 4;
		d = 2;
		e = 5;
		f = 8;
		j = 7;
		k = 6;
		l = 3;
		hand_made_argv_size = 9;
	}
	else if (i == 4)
	{
		a = 4;
		b = 10;
		c = 1;
		d = 2;
		e = 9;
		f = 8;
		j = 7;
		k = 6;
		l = 3;
		m = 5;
		hand_made_argv_size = 10;
	}
//	else if (i == 5)
//	{
//		a = 2;
//		b = 5;
//		c = 1;
//		d = 3;
//		e = 4;
//	}
//	else if (i == 6)
//	{
//		a = 2;
//		b = 5;
//		c = 3;
//		d = 1;
//		e = 4;
//	}
//	else if (i == 7)
//	{
//		a = 1;
//		b = 5;
//		c = 3;
//		d = 2;
//		e = 4;
//	}
//	else if (i == 8)
//	{
//		a = 5;
//		b = 2;
//		c = 4;
//		d = 3;
//		e = 1;
//	}
	int hand_made_argv[10] = {a, b, c, d, e, f, j, k, l, m};
	
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
	
	
	printf("for: ");
	print_lists_numbers(data.a);
	printf("\n");

	handle_hundeds_numbers(data.a, data.b, hand_made_argv);
	
	
	
	if (check_the_order(data.a) == 0)
	{
		printf("OK\n\n");
	}
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

int test_20(void)
{
	int hand_made_argv_size = 20;

	int hand_made_argv[20] = {1, 18, 3, 15, 5, 10, 7, 8, 9, 6, 11, 12, 13, 14, 4, 16, 17, 2, 19, 20};
	
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
	
	
	printf("for: ");
	print_lists_numbers(data.a);
	printf("\n");

	handle_hundeds_numbers(data.a, data.b, hand_made_argv);
	
	
	
	if (check_the_order(data.a) == 0)
	{
		printf("OK\n\n");
	}
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



static void    test_from6to10()
{
	
	int variations = 5; //max 9
	int i = 0;
	while (i < variations)
	{
//		printf("%i\n", i);
		i += provide_variations_for_diff(i);
	}

}


void	test_6_10_numbers()
{
	test_from6to10();

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
		
//	printf("for: ");
//	print_lists_numbers(data.a);
//	printf("\n");
	
	
	handle_hundeds_numbers(data.a, data.b, hand_made_argv);
	
	
	if (check_the_order(data.a) == 0)
	{
		printf("OK\n\n");
	}
	if (check_the_order(data.a) == 1)
	{
		printf("______________OOOPS, ORDER IS WRONG____________\n");
		printf("check yourself: ");
		print_lists_numbers(data.a);
		
	}
	
	destroy_list(data.a);
	destroy_list(data.b);
	free(hand_made_argv);
}

void	test_103_numbers()
{
	int hand_made_argv_size = 103;
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
		
//	printf("for: ");
//	print_lists_numbers(data.a);
//	printf("\n");
	
	
	handle_hundeds_numbers(data.a, data.b, hand_made_argv);
	
	
	if (check_the_order(data.a) == 0)
	{
		printf("OK\n\n");
	}
	if (check_the_order(data.a) == 1)
	{
		printf("______________OOOPS, ORDER IS WRONG____________\n");
		printf("check yourself: ");
		print_lists_numbers(data.a);
		
	}
	
	destroy_list(data.a);
	destroy_list(data.b);
	free(hand_made_argv);
}


void	test_numbers(int hand_made_argv_size, int *hand_made_argv)
{
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
	
	
	handle_hundeds_numbers(data.a, data.b, hand_made_argv);
	
	
	if (check_the_order(data.a) == 0)
	{
		printf("OK\n\n");
	}
	if (check_the_order(data.a) == 1)
	{
		printf("______________OOOPS, ORDER IS WRONG____________\n");
		printf("check yourself: ");
		print_lists_numbers(data.a);
		
	}
	
	destroy_list(data.a);
	destroy_list(data.b);
	free(hand_made_argv);
}

void	test_diff_numbers(void)
{
	test_6_10_numbers();
	test_20();
	test_100_numbers(); //669
	test_103_numbers(); //733
	
	int hand_made_argv_size;
	int *hand_made_argv;
	
	hand_made_argv_size = 121;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //915
	
	hand_made_argv_size = 127;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //915
	
	hand_made_argv_size = 134;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //960
	
	hand_made_argv_size = 139;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //1038
	
	hand_made_argv_size = 140;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //1079
	
	hand_made_argv_size = 158;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //1202
	
	hand_made_argv_size = 160;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //1255

	hand_made_argv_size = 167;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //1387
	
	hand_made_argv_size = 200;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //1802
	
	hand_made_argv_size = 210;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //1833
	
	hand_made_argv_size = 225;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //1994
	
	hand_made_argv_size = 321;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //3248
	
	hand_made_argv_size = 404;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //4469
	
	hand_made_argv_size = 466;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //5348
	
	hand_made_argv_size = 473;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //5376
	
	hand_made_argv_size = 499;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //5842
	
	hand_made_argv_size = 500;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //5945
	
	hand_made_argv_size = 501;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //6038
	
	hand_made_argv_size = 528;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //6286
	
	hand_made_argv_size = 580;
	hand_made_argv = generate_random_numbers(hand_made_argv_size);
	test_numbers(hand_made_argv_size, hand_made_argv); //6977
	
}
