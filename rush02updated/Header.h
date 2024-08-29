/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 08:29:04 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/28 13:57:37 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdbool.h>

char	*ft_atoi(char *str);
void	ft_convert(char *buffer, int size);
int	ft_count(char *buffer);
char *read_file(char *filename);
void	ft_units(char *buffer);
void	ft_tens(char *buffer);
void	ft_hundreds(char *buffer);
char	*ft_value(char *key);
char *find_value_by_key(char *contents, char *key);

extern char	*file_contents;

#endif