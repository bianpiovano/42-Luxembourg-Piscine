/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:48:34 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 14:48:39 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

/*int main(void) {
    char *src;
    char dest[0];

    src = "hola mundo";
    printf("base: %s\n", src);
    printf("before copy: %s\n", dest);
    ft_strlcpy(dest, src, 12);
    printf("after copy: %s\n", dest);
}*/
