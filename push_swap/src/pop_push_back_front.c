/*
	pop_push_back_front.c
	push_swap_xcode

	Created by Yuliia Demura on 05/06/2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "my_list.h"
#include "error_handling.h"

int	push_front(t_my_list *list, int new_number)
{
	t_list_node			*new_first_node;
	t_error_handling	err;

	new_first_node = malloc(sizeof(t_list_node));
	if (new_first_node == NULL)
		return (ERR_MALLOC);
	new_first_node->number = new_number;
	new_first_node->next = list->front_node;
	new_first_node->prev = NULL;
	if (list->size == 0)
		list->back_node = new_first_node;
	else
		list->front_node->prev = new_first_node;
	list->front_node = new_first_node;
	list->size++;
	err = OK;
	return (OK);
}

int	push_back(t_my_list *list, int new_number)
{
	t_list_node			*new_last_node;
	t_error_handling	err;

	new_last_node = malloc(sizeof(t_list_node));
	if (new_last_node == NULL)
		return (ERR_MALLOC);
	new_last_node->number = new_number;
	new_last_node->prev = list->back_node;
	new_last_node->next = NULL;
	if (list->size == 0)
		list->front_node = new_last_node;
	else
		list->back_node->next = new_last_node;
	list->back_node = new_last_node;
	list->size++;
	err = OK;
	return (err);
}

int	pop_back(t_my_list *list)
{
	int			number;
	t_list_node	*previos_before_last_that_becomes_last;

	if (list->size == 0)
		return (0);
	number = list->back_node->number;
	previos_before_last_that_becomes_last = list->back_node->prev;
	free(list->back_node);
	list->size--;
	if (list->size > 0)
	{
		list->back_node = previos_before_last_that_becomes_last;
		list->back_node->next = NULL;
	}
	return (number);
}

int	pop_front(t_my_list *list)
{
	int			number;
	t_list_node	*second_node_that_becomes_first;

	if (list->size == 0)
		return (0);
	number = list->front_node->number;
	second_node_that_becomes_first = list->front_node->next;
	if (list->front_node)
		free(list->front_node);
	list->size--;
	if (list->size > 0)
	{
		list->front_node = second_node_that_becomes_first;
		list->front_node->prev = NULL;
	}
	return (number);
}
