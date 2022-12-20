/*
	push_b_or_rotate_a.c
	push_swap_xcode

	Created by Julia on 21.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "handle_100_numbers.h"

int	rr_or_rrr_a_to_find_number_in_chunk(t_my_list *a, t_my_list *b,
	t_chunk *chunk)
{
	decide_the_direction(a, chunk);
	if (chunk->direction == GO_FRONT)
	{
		while (find_int_in_chunk(chunk, a->front_node->number) == 0
			&& chunk->err == OK)
			chunk->err = rotate(a, b, ONLY_A);
	}
	if (chunk->direction == GO_BACK)
	{
		while (find_int_in_chunk(chunk, a->front_node->number) == 0
			&& chunk->err == OK)
			chunk->err = reverse_rotate(a, b, ONLY_A);
	}
	return (error_int_check(chunk->err));
}

int	presort_b(t_my_list *b, t_chunk *chunk)
{
	if (b->front_node->number >= chunk->mid_number)
		chunk->err = rotate(b, b, ONLY_B);
	else if (b->front_node->number > b->front_node->next->number)
		chunk->err = swap(b, b, ONLY_B);
	return (error_int_check(chunk->err));
}

int	push_b_or_rotate_a(t_my_list *a, t_my_list *b, t_chunk *chunk)
{
	int	i;

	i = 0;
	if (find_int_in_chunk(chunk, a->front_node->number) == 1)
	{
		chunk->err = push(a, b, ONLY_B);
		if (b->size > 1 && chunk->err == OK)
			chunk->err = presort_b(b, chunk);
		i++;
	}
	else
		chunk->err = rr_or_rrr_a_to_find_number_in_chunk(a, b, chunk);
	return (i);
}
