/*
	handle_3_numbers.h
	push_swap_xcode

	Created by Julia on 12.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef HANDLE_THREE_NUMBERS_H
# define HANDLE_THREE_NUMBERS_H

# include "push_swap_functions_with_write.h"
# include "quicksort.h"
# include <stdlib.h>

typedef enum e_order
{
	FIRST = 1,
	SECOND = 2,
	THIRD = 3
}				t_order;

typedef struct s_three
{
	int		min;
	int		mid;
	int		max;
	t_order	pos_min;
	t_order	pos_mid;
	t_order	pos_max;
}				t_three;

int	handle_three_numbers(t_my_list *a, t_my_list *b);

#endif
