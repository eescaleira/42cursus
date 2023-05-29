/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:17:59 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:55:55 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy (d, s, n);
	return (dest);
}

/*int	main(void)
{
	printf ("\n----- func: ft_memmove -----\n");
	char src1[] = "Hello World!";
	char dest2[100];
	int num_chars = 3;
	printf ("source: %s\n", src1);
	memmove (dest2, src1, num_chars);
	printf ("Dest: %s\n", dest2);
}*/