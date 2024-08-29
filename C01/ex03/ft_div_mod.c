/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:13:14 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/18 13:13:22 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int main() {
    int a = 20;
    int b = 3;
    int division, module;

    ft_div_mod(a, b, &division, &module);

    printf("division of %d between %d is %d\n", a, b, division);
    printf("module of %d and %d is %d\n", a, b, module);

    return 0;
}
*/
