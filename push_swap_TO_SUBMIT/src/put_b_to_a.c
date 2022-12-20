/*
	put_b_to_a.c
	push_swap_xcode

	Created by Julia on 19.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "put_b_to_a.h"

int	find_biggest_number_lst(t_my_list *list)
{
	t_list_node	*temp;
	int			i;
	int			max;

	temp = list->front_node;
	i = 0;
	max = temp->number;
	while (i < list->size)
	{
		if (temp->number > max)
			max = temp->number;
		i++;
		if (temp->next != 0)
			temp = temp->next;
	}
	return (max);
}

int	find_direction_to_rotate_b_for_max_int(t_my_list *b,
	t_chunk *chunk, int max)
{
	int			mediana;
	t_list_node	*temp_b;

	chunk->closest_back = 0;
	chunk->closest_front = 0;
	mediana = b->size / 2;
	temp_b = b->front_node;
	while (chunk->closest_front <= mediana && temp_b->number != max)
	{
		chunk->closest_front++;
		temp_b = go_to_next_or_prev(temp_b, CHECK_FRONT);
	}
	temp_b = b->back_node;
	while (chunk->closest_back < mediana && temp_b->number != max)
	{
		chunk->closest_back++;
		temp_b = go_to_next_or_prev(temp_b, CHECK_BACK);
	}
	if (chunk->closest_front <= chunk->closest_back)
		return (GO_FRONT);
	else
		return (GO_BACK);
}

int	rr_or_rrr_b(t_my_list *a, t_my_list *b, t_chunk *chunk, int max)
{
	chunk->direction = find_direction_to_rotate_b_for_max_int(b, chunk, max);
	while (b->front_node->number != max && chunk->err == OK)
	{
		if (chunk->direction == GO_FRONT)
			chunk->err = rotate(a, b, ONLY_B);
		else if (chunk->direction == GO_BACK)
			chunk->err = reverse_rotate(a, b, ONLY_B);
	}
	return (error_int_check(chunk->err));
}

int	put_from_b_to_a(t_my_list *a, t_my_list *b, t_chunk *chunk)
{
	int	max;

	max = 0;
	while (b->size > 0 && chunk->err == OK)
	{
		max = find_biggest_number_lst(b);
		if (b->front_node->number == max)
			chunk->err = push(a, b, ONLY_A);
		else
			chunk->err = rr_or_rrr_b(a, b, chunk, max);
	}
	return (error_int_check(chunk->err));
}
