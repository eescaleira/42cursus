/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:47:06 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:59:30 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pt;
	size_t			m;

	pt = (unsigned char *)s;
	m = 0;
	while (m < n)
	{
		if (pt[m] == (unsigned char)c)
			return ((void *)s + m);
		m++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf ("\n----- func: ft_memchr -----\n");
	char str5[] = "vamos.festejar";
	ft_memchr (str5, '.', 15);
	printf ("String after original: %p\n", memchr(str5, '.', 15));
	printf ("String after: %p\n", ft_memchr(str5, '.', 15));
}*/