/*
	chunk.h
	push_swap_xcode

	Created by Julia on 13.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef CHUNK_H
# define CHUNK_H

# include "my_list.h"
# include "quicksort.h"
# include "error_handling.h"

typedef enum e_chunk_number
{
	NUL = 0,
	ONE = 1,
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE = 5,
	SIX = 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	ELEVEN = 11,
	TWELF = 12
}					t_chunk_number;

typedef enum e_closest_num
{
	CHECK_FRONT = 1,
	CHECK_BACK = -1
}					t_closest_num;

typedef enum e_direction
{
	GO_FRONT = 1,
	GO_BACK = -1
}					t_direction;

typedef struct s_chunk
{
	t_error_handling	err;
	int					total_chunks;
	int					counter;
	int					chunk_size;
	t_chunk_number		chunk_index;
	int					min_number;
	int					max_number;
	int					mid_number;
	int					closest_front;
	int					closest_back;
	t_closest_num		closest;
	t_direction			direction;
	int					i;
}					t_chunk;

void	initiate_chunk(t_chunk *chunk);
void	form_chunk(t_my_list *a, t_chunk *chunk, int *array);

#endif
