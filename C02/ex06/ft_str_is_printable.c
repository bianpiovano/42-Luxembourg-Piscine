/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:46:10 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 14:46:17 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (true)
	{
		c = str[index];
		if (c == '\0')
		{
			break ;
		}
		if (c < 32 || c == 127)
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*int main(int argc, char** argv)
{
    printf("string: %s\n", argv[1]);
    printf("result: %d\n", ft_str_is_printable(argv[1]));
}*/
