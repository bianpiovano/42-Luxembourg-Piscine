/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:42:06 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 14:42:12 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;

    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main() {
	char *src;
	char dest[11];

	src = "Hola mundo";
	printf("base: %s\n", src);
	printf("before copy: %s\n", dest);
	ft_strncpy(dest, src, 10);
	printf("after copy: %s\n", dest);
    return 0;
}

