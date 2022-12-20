/*
	push_swap_functions_with_write.h
	push_swap_xcode

	Created by Yuliia Demura on 6/7/21.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef PUSH_SWAP_FUNCTIONS_WITH_WRITE_H
# define PUSH_SWAP_FUNCTIONS_WITH_WRITE_H

# include "error_handling.h"
# include "operations.h"
# include <unistd.h>

typedef enum e_identifier
{
	ONLY_A = 'a',
	ONLY_B = 'b',
	BOTH_AB = 2
}			t_identifier;

int	my_write_str(const char *str);
int	swap(t_my_list *a, t_my_list *b, t_identifier identifier);
int	push(t_my_list *a, t_my_list *b, t_identifier identifier);
int	rotate(t_my_list *a, t_my_list *b, t_identifier identifier);
int	reverse_rotate(t_my_list *a, t_my_list *b, t_identifier identifier);

#endif
