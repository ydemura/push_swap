/*																			*/
/*  main.c																	*/
/*  push_swap_xcode															*/
/*																			*/
/*  Created by Yuliia Demura on 5/10/21.									*/
/*  Copyright © 2021 Yuliia Demura. All rights reserved.					*/
/*                                                                          */

#include "push_swap.h"

int	form_a_list(t_my_list *a, int *arr, int size)
{
	int					i;

	i = 0;
	while (i < size)
	{
		if (push_back(a, arr[i]) < 0)
			return (ERR_MALLOC);
		i++;
	}
	return (OK);
}

int	form_array_int(t_input *input)
{
	int					i;

	input->array = malloc(sizeof(int) * input->array_size);
	if (input->array == NULL)
		return (ERR);
	i = 0;
	while (i < input->array_size)
	{
		if (str_is_numbers(input->argv_ptr[i]) < 0)
			return (ERR);
		if (ft_atoi_err(input->argv_ptr[i]) == ERR_WRONG_INT)
			return (ERR);
		else
			input->array[i] = (int)ft_atoi_err(input->argv_ptr[i]);
		i++;
	}
	return (check_for_doube(input->array, input->array_size));
}

int	check_the_order_lst(t_my_list *list)
{
	t_list_node	*tmp_head;
	int			i;

	i = 1;
	tmp_head = list->front_node;
	while (tmp_head != NULL && i < list->size)
	{
		if (tmp_head->number < tmp_head->next->number)
		{
			tmp_head = tmp_head->next;
		}
		else
			return (1);
		i++;
	}
	return (0);
}

int	sort_depend_on_size(t_input *input)
{
	if (input->array_size == 1 || check_the_order_lst(input->a) == 0)
		return (OK);
	else if (input->array_size > 1 && input->array_size <= 3)
		return (handle_three_numbers(input->a, input->b));
	else if (input->array_size > 3 && input->array_size <= 5)
		return (handle_five_numbers(input->a, input->b));
	else
		return (handle_hundeds_numbers(input->a, input->b, input->array));
}

int	main(int argc, const char **argv)
{
	t_input				input;
	t_error_handling	err;

	if (argc < 2)
		return (0);
	argv++;
	input.array_size = argc - 1;
	input.argv_ptr = argv;
	input.a = create_list();
	input.b = create_list();
	if (form_array_int(&input) != OK
		|| form_a_list(input.a, input.array, input.array_size) != OK)
	{
		destoroy_free(input.a, input.b, input.array);
		return (write_error_message(ERR));
	}
	err = sort_depend_on_size(&input);
	if (err != OK)
	{
		destoroy_free(input.a, input.b, input.array);
		return (write_error_message(ERR));
	}
	destoroy_free(input.a, input.b, input.array);
	return (0);
}
