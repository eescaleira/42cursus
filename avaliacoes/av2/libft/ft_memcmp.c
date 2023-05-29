/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:36:23 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:59:53 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = ((const unsigned char *)s1);
	str2 = ((const unsigned char *)s2);
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf ("\n----- func: ft_memcmp -----\n");
	printf ("%d\n", ft_memcmp("Hello World", "HeLlo WoRLd", 6));
	printf ("%d\n", memcmp("Hello World", "HeLlo WoRLd", 6));
	printf ("%d\n", ft_memcmp("tomorro", "Tomorrow", 4));
	printf ("%d\n", memcmp("tomorro", "Tomorrow", 4));
}*/