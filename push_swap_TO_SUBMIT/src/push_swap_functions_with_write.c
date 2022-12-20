/*
	push_swap_functions_with_write.c
	push_swap_xcode

	Created by Yuliia Demura on 6/7/21.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "push_swap_functions_with_write.h"

int	my_write_str(const char *str)
{
	int					i;

	i = 0;
	while (str[i] != '\0')
	{
		if (write(1, &str[i], 1) < 0)
			return (ERR_WRITE);
		i++;
	}
	return (OK);
}

int	swap(t_my_list *a, t_my_list *b, t_identifier identifier)
{
	if (identifier == ONLY_A)
	{
		if (my_write_str("sa\n") < 0)
			return (ERR_WRITE);
		return (swap_first_two(a));
	}
	else if (identifier == ONLY_B)
	{
		if (my_write_str("sb\n") < 0)
			return (ERR_WRITE);
		return (swap_first_two(b));
	}
	else if (identifier == BOTH_AB)
	{
		if (my_write_str("ss\n") < 0)
			return (ERR_WRITE);
		return (swap_first_two(a) || swap_first_two(b));
	}
	return (ERR);
}

int	push(t_my_list *a, t_my_list *b, t_identifier identifier)
{
	if (identifier == ONLY_A)
	{
		if (my_write_str("pa\n") < 0)
			return (ERR_WRITE);
		return (pop_front_from_one_list_push_to_front_other(b, a));
	}
	else if (identifier == ONLY_B)
	{
		if (my_write_str("pb\n") < 0)
			return (ERR_WRITE);
		return (pop_front_from_one_list_push_to_front_other(a, b));
	}
	else
		return (ERR);
}

int	rotate(t_my_list *a, t_my_list *b, t_identifier identifier)
{
	if (identifier == ONLY_A)
	{
		if (my_write_str("ra\n") < 0)
			return (ERR_WRITE);
		return (pop_from_front_push_back_same_list(a));
	}
	else if (identifier == ONLY_B)
	{
		if (my_write_str("rb\n") < 0)
			return (ERR_WRITE);
		return (pop_from_front_push_back_same_list(b));
	}
	else if (identifier == BOTH_AB)
	{
		if (my_write_str("rr\n") < 0)
			return (ERR_WRITE);
		return (pop_from_front_push_back_same_list(a)
			|| pop_from_front_push_back_same_list(b));
	}
	return (ERR);
}

int	reverse_rotate(t_my_list *a, t_my_list *b, t_identifier identifier)
{
	if (identifier == ONLY_A)
	{
		if (my_write_str("rra\n") < 0)
			return (ERR_WRITE);
		return (pop_back_push_front_same_list(a));
	}
	else if (identifier == ONLY_B)
	{
		if (my_write_str("rrb\n") < 0)
			return (ERR_WRITE);
		return (pop_back_push_front_same_list(b));
	}
	else if (identifier == BOTH_AB)
	{
		if (my_write_str("rrr\n") < 0)
			return (ERR_WRITE);
		return (pop_back_push_front_same_list(a)
			|| pop_back_push_front_same_list(b));
	}
	return (ERR);
}
