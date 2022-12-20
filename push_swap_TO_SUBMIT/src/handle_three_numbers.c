/*
	handle_one-three_numbers.c
	push_swap_xcode

	Created by Julia on 12.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "handle_three_numbers.h"

int	handle_one_two(t_my_list *a, t_my_list *b)
{
	t_error_handling	err;

	if (a->size == 2 && a->back_node->number < a->front_node->number)
		return (swap(a, b, ONLY_A));
	else
	{
		err = OK;
		return (err);
	}	
}

int	find_min_mid_max_for_three(t_my_list *a, t_three *num)
{
	t_list_node	*temp;
	int			arr_num[3];
	int			i;

	temp = a->front_node;
	i = 0;
	while (i < 3)
	{
		arr_num[i] = temp->number;
		i++;
		if (temp->next != NULL)
			temp = temp->next;
	}
	quicksort(arr_num, 0, 2);
	num->min = arr_num[0];
	num->mid = arr_num[1];
	num->max = arr_num[2];
	return (OK);
}

void	find_position_for_min_mid_max_for_three(t_my_list *a, t_three *num)
{
	t_list_node	*temp;
	int			i;

	temp = a->front_node;
	i = 1;
	num->pos_min = 0;
	num->pos_mid = 0;
	num->pos_max = 0;
	while (i <= 3)
	{
		if (temp->number == num->min)
			num->pos_min = i;
		else if (temp->number == num->mid)
			num->pos_mid = i;
		else
			num->pos_max = i;
		i++;
		if (temp->next != NULL)
			temp = temp->next;
	}
}

int	sort_three_numbers(t_my_list *a, t_my_list *b, t_three *num)
{
	t_error_handling	err;

	err = OK;
	if (num->pos_max == FIRST
		&& num->pos_min == SECOND && num->pos_mid == THIRD)
		err = rotate(a, b, ONLY_A);
	else if (num->pos_mid == FIRST
		&& num->pos_max == SECOND && num->pos_min == THIRD)
		err = reverse_rotate(a, b, ONLY_A);
	else
	{
		err = swap(a, b, ONLY_A);
		find_position_for_min_mid_max_for_three(a, num);
		if (num->pos_min == FIRST
			&& num->pos_mid == SECOND && num->pos_max == THIRD)
			return (error_int_check(err));
		sort_three_numbers(a, b, num);
	}
	return (error_int_check(err));
}

int	handle_three_numbers(t_my_list *a, t_my_list *b)
{
	t_three				num;
	t_error_handling	err;

	err = OK;
	if (a->size < 3)
	{
		handle_one_two(a, b);
	}
	else if (find_min_mid_max_for_three(a, &num) == OK)
	{
		find_position_for_min_mid_max_for_three(a, &num);
		err = sort_three_numbers(a, b, &num);
	}
	return (error_int_check(err));
}
