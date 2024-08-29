/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:45:00 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/28 14:23:11 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Header.h"
#include <unistd.h>
#include <stdio.h>

char	*file_contents = "numbers.dict";

char	*get_number(int argc, char **argv)
{
	if (argc == 2)
		return (ft_atoi(argv[1]));

	if (argc == 3)
		return (ft_atoi(argv[2]));
	return (NULL);
}
/*library	get_library(int argc, char **argv)
{
	//library

	//librarie == standard library
	if (argc == 3)
		//library = argv[1];
	return (library);	
}*/

int	main(int argc, char **argv)
{
	char	*nbr;
	nbr = get_number(argc, argv);
	if (!nbr)
		write(1, "Error", 5);
	ft_convert(nbr, ft_count(nbr));
	write(1, "\n", 1);
}
