/*
	operations.c
	push_swap_xcode

	Created by Yuliia Demura on 05/06/2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "operations.h"

int	swap_first_two(t_my_list *list)
{
	int	first_n;
	int	sec_n;

	if (list->size < 1)
		return (0);
	first_n = pop_front(list);
	if (list->size == 1)
		return (push_back(list, first_n));
	sec_n = pop_front(list);
	return (push_front(list, first_n) || push_front(list, sec_n));
}

int	pop_front_from_one_list_push_to_front_other(t_my_list *donor,
	t_my_list *acceptor)
{
	int	donors_first;

	if (donor == 0)
		return (0);
	donors_first = pop_front(donor);
	return (push_front(acceptor, donors_first));
}

int	pop_from_front_push_back_same_list(t_my_list *list)
{
	int	front_number;

	front_number = pop_front(list);
	return (push_back(list, front_number));
}

int	pop_back_push_front_same_list(t_my_list *list)
{
	int	back_number;

	back_number = pop_back(list);
	return (push_front(list, back_number));
}
