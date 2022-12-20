//
//  create_int_arry_from_argv.c
//  push_swap_xcode
//
//  Created by Yuliia Demura on 6/9/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "create_int_arry_from_argv.h"
#include <stdlib.h>
#include "my_list.h"


#include <stdio.h>
#include "libft.h"

int   *get_numbers_from_argv_to_list(char *str)
{
    char **array_str;
    int *array_int;
    int integer_number;

    array_str = ft_split(str, ' ');
    integer_number = 0;
    while (array_str[integer_number] != NULL)
        integer_number++;
    array_int = malloc(sizeof(int) * integer_number);
    if (array_int == NULL)
        return (NULL);
    integer_number = 0;
    while (*array_str != NULL)
    {
        array_int[integer_number] = ft_atoi(*array_str);
        array_str++;
        integer_number++;
    }
    return (array_int);
}
