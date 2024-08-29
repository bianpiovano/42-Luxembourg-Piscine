/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:18:11 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/29 14:23:20 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main() 
{
    char str1[] = "hola";
    char str2[] = "chau";
    unsigned int n = 4;
    printf("Comparando \"%s\" y \"%s\" con n = 
    ---please delete this line---
    %u: %d\n", str1, str2, n, ft_strncmp(str1, str2, n));
    return 0;
}
*/
