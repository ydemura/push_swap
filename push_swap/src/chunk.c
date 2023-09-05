/*
	chunk.c
	push_swap_xcode

	Created by Julia on 13.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "chunk.h"

void	initiate_chunk(t_chunk *chunk)
{
	chunk->err = OK;
	chunk->total_chunks = 0;
	chunk->counter = 1;
	chunk->chunk_size = 0;
	chunk->chunk_index = 0;
	chunk->min_number = 0;
	chunk->max_number = 0;
	chunk->mid_number = 0;
	chunk->closest_front = 0;
	chunk->closest_back = 0;
	chunk->closest = 0;
	chunk->direction = 0;
	chunk->i = 0;
}

int	get_number_by_index_list(t_my_list *a, int index)
{
	t_list_node	*temp;
	int			i;

	temp = a->front_node;
	i = 0;
	while (i < index)
	{
		i++;
		if (temp->next != NULL)
			temp = temp->next;
	}
	return (temp->number);
}

void	form_chunk(t_my_list *a, t_chunk *chunk, int *array)
{
	int	index_start;
	int	index_end;

	index_start = chunk->chunk_size * chunk->chunk_index;
	if (a->size >= chunk->chunk_size)
	{
		index_end = (chunk->chunk_size + index_start) - 1;
		chunk->mid_number = array[index_start + (chunk->chunk_size / 2)];
	}
	else
	{
		index_end = (a->size + index_start) - 1;
		chunk->mid_number = array[index_start + (a->size / 2)];
	}
	chunk->min_number = array[index_start];
	chunk->max_number = array[index_end];
}
