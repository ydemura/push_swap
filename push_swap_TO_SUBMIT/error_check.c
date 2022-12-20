/*
	error_check.c
	push_swap_xcode

	Created by Julia on 20.07.2021.
	Copyright © 2021 Yuliia Demura. All rights reserved.
*/

#include "error_handling.h"
#include "my_list.h"

int	error_int_check(t_error_handling err)
{
	if (err == OK)
		return (0);
	else
		return (ERR);
}

long	int	ft_atoi_err(const char *str)
{
	int			n;
	long int	res;

	while (*str == 32 || (*str >= 8 && *str <= 14))
		str++;
	n = 1;
	if (*str == '-')
	{
		str++;
		n = -1;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	res *= n;
	if (res >= -2147483648 && res <= 2147483647)
		return (res);
	else
		return (ERR_WRONG_INT);
}

int	str_is_numbers(const char *str)
{
	int					i;

	i = 0;
	if (str[0] == '-')
	{
		if ((str[1] == '\0') || (str[i] < '0' && str[i] > '9'))
			return (ERR);
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (ERR);
		i++;
	}
	return (OK);
}

int	check_for_doube(int *array, int size)
{
	int					i;
	int					j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (ERR);
			j++;
		}
		i++;
	}
	return (OK);
}
