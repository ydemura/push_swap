/*
	operations.h
	push_swap_xcode

	Created by Yuliia Demura on 05/06/2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "my_list.h"

int	swap_first_two(t_my_list *list);
int	pop_front_from_one_list_push_to_front_other(t_my_list *donor,
		t_my_list *acceptor);
int	pop_from_front_push_back_same_list(t_my_list *list);
int	pop_back_push_front_same_list(t_my_list *list);

#endif