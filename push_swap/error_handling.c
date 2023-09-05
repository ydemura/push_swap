/*
	error_handling.c
	push_swap_xcode

	Created by Yuliia Demura on 5/11/21.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "push_swap_functions_with_write.h"

void	destoroy_free(t_my_list *a, t_my_list *b, int *array)
{
	destroy_list(a);
	destroy_list(b);
	if (array != NULL)
		free(array);
}

int	write_error_message(t_error_handling err)
{
	if (err == OK)
		return (OK);
	else if (err == ERR)
		my_write_str("Error\n");
	return (ERR);
}
