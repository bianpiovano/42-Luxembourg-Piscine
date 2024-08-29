/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:12:18 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/28 14:27:11 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include  "Header.h"

bool last = false;

void	ft_units(char *buffer)
{
	if (buffer[1] == '\0')
		last = true;
	char *buf;
	buf = (char *)malloc(2);
	buf[0] = buffer[0];
	buf[1] = '\0';
	write(1, ft_value(buf), ft_count(ft_value(buf)));
	if (!last)
		write(1, " ", 1);
	last = false;
}

void	ft_tens(char *buffer)
{
	char *buf;
	
	if (buffer[2] == '\0')
			last = true;
	buf = (char *)malloc(5);
	if (buffer[0] < '2' || buffer[1] == '0')
	{
		buf[0] = buffer[0];
		buf[1] = buffer[1];
		buf[2] = '\0';
		write(1, ft_value(buf), ft_count(ft_value(buf)));
		if (!last)
			write(1, " ", 1);
	}
	else
	{
		buf[0] = buffer[0];
		buf[1] = '0';
		buf[2] = buffer[2];
		write(1, ft_value(buf), ft_count(ft_value(buf)));
		write(1, "-", 1);
		buf[0] = buffer[1];
		buf[1] = buffer [2];
		ft_units(buf);
		if (!last)
			write(1, " ", 1);
	}
	last = false;
}

void	ft_hundreds(char *buffer)
{
	char *buf;
	
	if (buffer[3] == '\0')
			last = true;
	buf = (char *)malloc(5);
	buf[0] = buffer[0];
	ft_units(buf);
	write(1, "hundred", 8);
	if (!last)
			write(1, " ", 1);
	if (buffer[1] != '0')
	{
		buf[0] = buffer[1];
		buf[1] = buffer[2];
		write(1, "and ", 4);
		ft_tens(buf);
	}
	else
	{
		buf[0] = buffer[2];
		ft_units(buf);
	}
	last = false;
}