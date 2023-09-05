/*
	handle_100_numbers.c
	push_swap_xcode

	Created by Julia on 12.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "handle_100_numbers.h"

int	handle_leftovers(t_my_list *a, t_my_list *b, t_chunk *chunk)
{
	while (a->size != 0 && chunk->err == OK)
	{
		chunk->err = push(a, b, ONLY_B);
		if (b->size > 1 && chunk->err == OK)
			presort_b(b, chunk);
	}
	return (error_int_check(chunk->err));
}

int	reform_chunk(t_chunk *chunk, t_my_list *a, int *array)
{
	chunk->chunk_index++;
	form_chunk(a, chunk, array);
	return (0);
}

int	sort_one_chunk(t_my_list *a, t_my_list *b, t_chunk *chunk)
{
	while (a->size > 0 && chunk->err == OK)
		chunk->i += push_b_or_rotate_a(a, b, chunk);
	if (chunk->err == OK)
		chunk->err = handle_leftovers(a, b, chunk);
	return (error_int_check(chunk->err));
}

int	sort_list(t_my_list *a, t_my_list *b, int *array, t_chunk *chunk)
{
	chunk->i = 0;
	form_chunk(a, chunk, array);
	if (chunk->total_chunks == 1)
		return (sort_one_chunk(a, b, chunk));
	while (chunk->counter < chunk->total_chunks
		&& a->size > 0 && chunk->err == OK)
	{
		if ((a->size >= chunk->chunk_size && chunk->i == chunk->chunk_size)
			|| (a->size < chunk->chunk_size && chunk->i == a->size))
		{
			chunk->i = reform_chunk(chunk, a, array);
			chunk->counter++;
			if (chunk->counter >= chunk->total_chunks
				&& a->size < chunk->chunk_size)
				break ;
		}
		chunk->i += push_b_or_rotate_a(a, b, chunk);
	}
	if (chunk->err == OK)
		chunk->err = handle_leftovers(a, b, chunk);
	return (error_int_check(chunk->err));
}

int	handle_hundeds_numbers(t_my_list *a, t_my_list *b, int *array)
{
	t_chunk	chunk;

	chunk.err = prepare_for_sorting(a, &chunk, array);
	if (sort_list(a, b, array, &chunk) == OK)
		chunk.err = put_from_b_to_a(a, b, &chunk);
	return (error_int_check(chunk.err));
}
