//
//  test_utilities.c
//  push_swap_xcode
//
//  Created by Yuliia Demura on 7/10/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "test_utilities.h"
//#include "algoritm_first_steps.h"
#include "push_swap_functions_with_write.h"
#include "test_utilities.h"
#include <stdlib.h>


void	swap_two_integers(int *array, int one, int two)
{
	int temp;
	
	temp = array[one];
	array[one] = array[two];
	array[two] = temp;
}

int *generate_random_numbers(int max)
{
	int *final_array;
	
	final_array = malloc(sizeof(int) * max);
	
	int i = 0;
	
	while (i < max)
	{
		final_array[i] = i;
		i++;
	}
	
	i = 0;
	int k = 0;
	int j = 0;
	
	while (i < max)
	{
		if (k < max - 2)
			k += 2;
		else if (k > 6)
			k -= 6;
		swap_two_integers(final_array, i, k);
		if (j < max - 4)
			j += 4;
		else if (j > 1)
			j--;
		swap_two_integers(final_array, i, j);
		i++;
	}
	return (final_array);
}



void    print_lists_numbers(t_my_list *list)
{
    t_list_node *tmp_head;
    int i;

    i = 0;
    tmp_head = list->front_node;
    printf(" ");
    while (i < list->size)
    {
        printf("%i ", tmp_head->number);
        tmp_head = tmp_head->next;
        i++;
    }
    printf("\n");
}


int        print_array(int *array, int array_size)
{
    printf("\n");
    int i = 0;
    
    while (i < array_size)
    {
        printf("%i ", array[i]);
        i++;
    }
    printf("\n");
    return (0);
}

int check_the_order(t_my_list *list)
{
    t_list_node *tmp_head;
    int i;

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

    return (0); //order
}
