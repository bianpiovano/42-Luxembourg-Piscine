/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:32:58 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/29 14:34:38 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (*to_find == '\0')
		return (str);
	a = str;
	b = to_find;
	while (true)
	{
		if (*b == '\0')
			return (a - (b - to_find));
		if (*a == *b)
			b++;
		else
			b = to_find;
		if (*a == '\0')
			break ;
		a++;
	}
	return (0);
}

/*
int main() {
    char str[] = "Hola, mundo!";
    char to_find[] = "mundo";
    char not_found[] = "world";
*/
