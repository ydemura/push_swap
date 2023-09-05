/*
	error_handling.h
	push_swap_xcode

	Created by Yuliia Demura on 6/7/21.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef ERROR_HANDLING_H
# define ERROR_HANDLING_H

# include "my_list.h"

typedef enum e_error_handling
{
	OK = 0,
	ERR = -101,
	ERR_MALLOC = -102,
	ERR_WRITE = -103,
	ERR_WRONG_INT = 2147483648
}			t_error_handling;

int				write_error_message(t_error_handling err);
void			destoroy_free(t_my_list *a, t_my_list *b, int *array);
int				str_is_numbers(const char *str);
long int		ft_atoi_err(const char *str);
int				check_for_doube(int *array, int size);
int				error_int_check(t_error_handling err);

#endif
