/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:16:55 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 10:13:01 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	variable2;
	int	finalvariable;

	index = 0;
	variable2 = size -1;
	while (index < size / 2)
	{
		finalvariable = tab[index];
		tab[index] = tab[variable2];
		tab[variable2] = finalvariable;
		index++;
		variable2--;
	}
}
/*#include <stdio.h>
int main() {

    int array[] = {7, 3, 4, 6, 2};
    int size = 5;
    ft_rev_int_tab(array, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/
