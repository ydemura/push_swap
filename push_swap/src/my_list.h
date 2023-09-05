/*
	my_list.h
	push_swap_xcode

	Created by Yuliia Demura on 05/06/2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#ifndef MY_LIST_H
# define MY_LIST_H

# include <stdlib.h>

typedef struct s_list_node
{
	int					number;
	struct s_list_node	*next;
	struct s_list_node	*prev;
}				t_list_node;

typedef struct s_my_list
{
	int			size;
	t_list_node	*front_node;
	t_list_node	*back_node;
}				t_my_list;

t_my_list	*create_list(void);
void		destroy_list(t_my_list *list);
int			push_front(t_my_list *list, int new_number);
int			push_back(t_my_list *list, int new_number);
int			pop_front(t_my_list *list);
int			pop_back(t_my_list *list);

#endif
