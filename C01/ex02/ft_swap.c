/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:12:49 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/18 13:12:56 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	my_variable_temp;

	my_variable_temp = *a;
	*a = *b;
	*b = my_variable_temp;
}

/* #include <stdio.h>
int main() {
    int number1 = 2;
    int number2 = 3;

printf("my numbers before swap: number1 = %d, number2 = %d\n", number1, number2);

ft_swap(&number1, &number2);

prinf("my numbers after swap: number1 = %d, number2 = %d\n", number1, number2);

}
*/
