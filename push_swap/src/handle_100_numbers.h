/*
	handle_100_numbers.h
	push_swap_xcode

	Created by Julia on 12.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef HANDLE_100_NUMBERS_H
# define HANDLE_100_NUMBERS_H

# include "handle_five_numbers.h"
# include "push_swap_functions_with_write.h"
# include "prepare_for_sorting.h"
# include "put_b_to_a.h"

int		handle_hundeds_numbers(t_my_list *a, t_my_list *b, int *array);
int		push_b_or_rotate_a(t_my_list *a, t_my_list *b, t_chunk *chunk);
int		presort_b(t_my_list *b, t_chunk *chunk);

#endif
