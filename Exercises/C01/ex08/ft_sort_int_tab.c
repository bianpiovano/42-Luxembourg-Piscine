/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:17:17 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 10:57:40 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	variable1;
	int	variable2;
	int	finalvariable;

	variable1 = 0;
	while (variable1 < size - 1)
	{
		variable2 = 0;
		while (variable2 < size - 1 - variable1)
		{
			if (tab[variable2] > tab[variable2 + 1])
			{
				finalvariable = tab[variable2];
				tab[variable2] = tab[variable2 + 1];
				tab[variable2 + 1] = finalvariable;
			}
			variable2++;
		}
		variable1++;
	}
}
/*#include <stdio.h>
int main() 
{
    int array[] = {2, 0, 3, 4}; 
    int size = 4;

    ft_sort_int_tab(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
*/
