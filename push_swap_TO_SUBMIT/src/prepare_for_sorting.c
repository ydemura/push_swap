/*
	prepare_for_sorting.c
	push_swap_xcode

	Created by Julia on 19.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "prepare_for_sorting.h"

void	determine_total_chunks(int size_a, t_chunk *chunk)
{
	int	num;

	if (size_a > 20 && size_a < 200)
		num = 20;
	else
		num = 35;
	if (size_a <= 20)
	{
		chunk->total_chunks = 1;
		chunk->chunk_size = size_a;
	}
	else
	{
		if (size_a >= 500)
			chunk->total_chunks = 11;
		else
			chunk->total_chunks = size_a / num;
		chunk->chunk_size = size_a / chunk->total_chunks;
	}
}

int	prepare_for_sorting(t_my_list *a, t_chunk *chunk, int *array)
{
	initiate_chunk(chunk);
	quicksort(array, 0, a->size - 1);
	determine_total_chunks(a->size, chunk);
	chunk->err = OK;
	return (OK);
}
