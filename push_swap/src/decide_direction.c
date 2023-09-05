/*
	decide_direction.c
	push_swap_xcode

	Created by Julia on 19.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "decide_direction.h"

int	find_int_in_chunk(t_chunk *chunk, int number)
{
	if (number >= chunk->min_number && number <= chunk->max_number)
		return (1);
	return (0);
}

t_list_node	*go_to_next_or_prev(t_list_node *temp, t_closest_num closest)
{
	if (closest == CHECK_FRONT)
	{
		if (temp->next != 0)
			temp = temp->next;
	}
	if (closest == CHECK_BACK)
	{
		if (temp->prev != 0)
			temp = temp->prev;
	}
	return (temp);
}

void	find_place_of_front_or_back_number(t_my_list *list,
	t_closest_num closest, t_chunk *chunk)
{
	int			middle;
	t_list_node	*temp;

	middle = list->size / 2;
	if (closest == CHECK_FRONT)
	{
		temp = list->front_node;
		while (chunk->closest_front < middle
			&& find_int_in_chunk(chunk, temp->number) == 0)
		{
			temp = go_to_next_or_prev(temp, closest);
			chunk->closest_front++;
		}
	}
	else if (closest == CHECK_BACK)
	{
		temp = list->back_node;
		while (chunk->closest_back < middle
			&& find_int_in_chunk(chunk, temp->number) == 0)
		{
			temp = go_to_next_or_prev(temp, closest);
			chunk->closest_back++;
		}
	}
}

void	decide_the_direction(t_my_list *list, t_chunk *chunk)
{
	chunk->closest_front = 0;
	chunk->closest_back = 0;
	chunk->closest = CHECK_FRONT;
	find_place_of_front_or_back_number(list, chunk->closest, chunk);
	chunk->closest = CHECK_BACK;
	find_place_of_front_or_back_number(list, chunk->closest, chunk);
	if (chunk->closest_front <= chunk->closest_back)
		chunk->direction = GO_FRONT;
	else if (chunk->closest_front > chunk->closest_back)
		chunk->direction = GO_BACK;
}
