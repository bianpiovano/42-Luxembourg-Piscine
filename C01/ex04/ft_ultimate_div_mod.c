/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:13:36 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/18 13:56:55 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	my_variable_temp;

	my_variable_temp = *a;
	*a = my_variable_temp / *b;
	*b = my_variable_temp % *b;
}

/*#include <stdio.h>
int main()
{
    int x = 10;
    int y = 3;

    printf("before function ft_ultimate_div_mod:\n");
    printf("x = %d, y = %d\n", x, y);

    ft_ultimate_div_mod(&x, &y);

    printf("after function ft_ultimate_div_mod:\n");
    printf("x (result of division) = %d, and (result of module) = %d\n", x, y);

    return 0;
}*/
