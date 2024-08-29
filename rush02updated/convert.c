/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:35:20 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/28 14:11:26 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include  "Header.h"

void	ft_block(char *buffer, int size)
{
	if (size == 1)
		ft_units(buffer);
	if (size == 2)
		ft_tens(buffer);
	if (size == 3)
		ft_hundreds(buffer);
}

char	*ft_factorial(int i)
{
	char	*j;
	int	k;
	
	j = (char *)malloc(1 + (i * 3) + 1);
	j[0] = '1';
	k = 1;
	while (i > 0)
	{
		j[k] = '0';
		j[k + 1] = '0';
		j[k + 2]= '0';
		j[k + 3] = '\0';
		k += 3;
		i--;
	}
	return (j);
}

void	ft_convert(char *buffer, int size)
{
	int	dig;
	int	fact;
	char *value;
	char *key;
	
	if (buffer[0] != '0' || buffer[1] != '0' || buffer[2] != '0')
	{
		value = (char *)malloc(500);
		if (!value)
			write(1, "No mem\n", 6);
		key = (char *)malloc(32);
		if (!key)
			write(1, "No mem\n", 6);
		dig = (size % 3);
		fact = (size - 1) / 3;
		if (dig == 0)
			dig = 3;
		if (fact > 0)
		{
			ft_block(buffer, dig);
			key = ft_factorial(fact);
			value = ft_value(key);
			write(1, value, ft_count(value));
			if (buffer[dig + 1] != '0')
				write(1, ", ", 2);
			free(value);
			ft_convert(buffer + dig, size - dig);
		}
		ft_block(buffer, size);
	}
}
