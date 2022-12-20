/*
	handle_five_numbers.c
	push_swap_xcode

	Created by Julia on 12.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "handle_five_numbers.h"

int	max_from_list(t_my_list *list)
{
	t_list_node	*temp;
	int			i;
	int			max;

	i = 0;
	temp = list->front_node;
	max = temp->number;
	while (i < list->size)
	{
		if (temp->number > max)
			max = temp->number;
		if (temp->next != NULL)
			temp = temp->next;
		i++;
	}
	return (max);
}

int	min_from_list(t_my_list *list)
{
	t_list_node	*temp;
	int			i;
	int			min;

	i = 0;
	temp = list->front_node;
	min = temp->number;
	while (i < list->size)
	{
		if (temp->number < min)
			min = temp->number;
		if (temp->next != NULL)
			temp = temp->next;
		i++;
	}
	return (min);
}

int	push_min_amd_max_to_b(t_my_list *a, t_my_list *b)
{
	int					min;
	int					max;
	t_error_handling	err;

	min = min_from_list(a);
	max = max_from_list(a);
	err = OK;
	while (a->size > 3 && err == OK)
	{
		if (a->front_node->number == min || a->front_node->number == max)
			err = push(a, b, ONLY_B);
		else if (a->back_node->number == min || a->back_node->number == max)
			err = reverse_rotate(a, b, ONLY_A);
		else
			err = rotate(a, b, ONLY_A);
	}
	return (error_int_check(err));
}

int	handle_five_numbers(t_my_list *a, t_my_list *b)
{
	t_error_handling	err;

	err = OK;
	if (push_min_amd_max_to_b(a, b) == OK)
		handle_three_numbers(a, b);
	if (b->front_node->number < b->back_node->number)
		err = swap(a, b, ONLY_B);
	if (err == OK)
		return (push(a, b, ONLY_A) + rotate(a, b, ONLY_A) + push(a, b, ONLY_A));
	else
		return (ERR);
}
