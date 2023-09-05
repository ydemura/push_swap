/*
	create_destroy_lst.c
	push_swap_xcode

	Created by Julia on 20.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "my_list.h"

t_my_list	*create_list(void)
{
	t_my_list	*new_list;

	new_list = malloc(sizeof(t_my_list));
	if (new_list == NULL)
		return (NULL);
	new_list->back_node = NULL;
	new_list->front_node = NULL;
	new_list->size = 0;
	return (new_list);
}

void	destroy_list(t_my_list *list)
{
	while (list->size > 0)
		pop_front(list);
	free(list);
	list = NULL;
}
