/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:41:08 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 14:41:16 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char *src;
    char dest[50];

	src = "Hola mundo";
	printf("base: %s\n", src);
	printf("before copy: %s\n", dest);
	ft_strcpy(dest, src);
	printf("after copy: %s\n", dest);
}*/
