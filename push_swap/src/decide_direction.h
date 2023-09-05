/*
	decide_direction.h
	push_swap_xcode

	Created by Julia on 19.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef DECIDE_DIRECTION_H
# define DECIDE_DIRECTION_H

# include "chunk.h"

t_list_node	*go_to_next_or_prev(t_list_node *temp, t_closest_num closest);
int			find_int_in_chunk(t_chunk *chunk, int number);
void		decide_the_direction(t_my_list *list, t_chunk *chunk);

#endif
