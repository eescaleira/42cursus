/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:21:56 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:47:30 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	m;

	m = 0;
	if (size != '\0')
	{
		while ((m < size -1) && (src[m] != '\0'))
		{
			dst[m] = src[m];
			m++;
		}
		dst[m] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	printf ("\n----- func: ft_strlcpy -----\n");
	char	b[] = "";
	char	c[] = "Hello";
	printf("%lu,\n %s\n", ft_strlcpy(b, c, 9), b);
}*/