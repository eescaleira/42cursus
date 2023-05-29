/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:50:50 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:55:24 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	m;
	char			*d;
	const char		*s;

	m = 0;
	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	while (m < n)
	{
		d[m] = s[m];
		m++;
	}
	return (dest);
}

/*int	main(void)
{
	printf ("\n----- func: ft_memcpy -----\n");
	const char src [] = "Faltam 4!";
	char dest [100];
	memcpy (dest, src, sizeof(src));
	printf ("src: %s\n", src);
	printf ("dest: %s\n", dest);

}*/