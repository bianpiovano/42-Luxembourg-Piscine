/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:46:36 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 14:46:44 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;
	char	d;

	i = 0;
	while (true)
	{
		c = str[i];
		if (c == '\0')
		{
			break ;
		}
		if (c >= 'a' && c <= 'z')
		{
			d = c - 32;
			str[i] = d;
		}
		i++;
	}
	return (str);
}

/*int main(int argc, char** argv)
{
    printf("input: %s\n", argv[1]);
    printf("result: %s\n", ft_strupcase(argv[1]));
}*/
