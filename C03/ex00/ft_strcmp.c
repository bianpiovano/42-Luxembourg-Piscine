/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:15:42 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/29 14:17:04 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>

int main() 
{
    char str1[] = "hola";
    char str2[] = "chau";
    printf("C \"%s\" \"%s\" con n, %u: %d\n",
----please delete this line ----
 str1, str2, n, ft_strncmp(str1, str2, n));
    return 0;
}
*/
