/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:54:15 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 14:00:42 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_out(char b, char c, char d)
{
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(d);
	if (b != '7' || c != '8' || d != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	b;
	char	c;
	char	d;

	b = '0';
	while (b <= '7')
	{
		c = b + 1;
		while (c <= '8')
		{
			d = c + 1;
			while (d <= '9')
			{
				ft_out(b, c, d);
				d++;
			}
			c++;
		}
		b++;
	}
}
/*
int main(void)
{
    ft_print_comb();
    return 0;
}
*/
