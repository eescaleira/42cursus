/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:53:16 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:53:40 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
		str[i++] = c;
	return (s);
}

/*int	main(void)
{
	printf ("\n----- func: ft_memset -----\n");
	char str [20] = "Banana split";
	printf ("Before memset : %s", str);
	memset (str, 'm', 5);
	printf ("\nAfter the memset : %s\n", str);
}*/