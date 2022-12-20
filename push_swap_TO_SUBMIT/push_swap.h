/*
	push_swap.h
	push_swap_xcode

	Created by Julia on 26.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "push_swap_functions_with_write.h"
# include "handle_three_numbers.h"
# include "handle_five_numbers.h"
# include "handle_100_numbers.h"

typedef struct s_input
{
	t_my_list	*a;
	t_my_list	*b;
	const char	**argv_ptr;
	const char	*str;
	int			*array;
	int			array_size;
}				t_input;

#endif
