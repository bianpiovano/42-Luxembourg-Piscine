/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:55:26 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/29 14:55:34 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*result != '\0')
	{
		result++;
	}
	while (*src != '\0')
	{
		*result = *src;
		result++;
		src++;
	}
	*result = '\0';
	return (dest);
}

/*
#include <stdio.h> 

int main() {
    char dest1[20] = "hola, ";
    char src1[] = "mundo!";
    printf("Cadena original: \"%s\"\n", dest1);
    ft_strcat(dest1, src1);
    printf("Después de ft_strcat: \"%s\"\n\n", dest1);
}
*/
