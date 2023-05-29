/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:45:33 by migupere          #+#    #+#             */
/*   Updated: 2023/05/05 16:14:42 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;
	size_t	j;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dest;
	if (dst == src)
		return (0);
	if (size != 0 && i < (size - 1))
	{
		j = 0;
		while (i < (size - 1) && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (len_dest > size)
		return (size + len_src);
	return (len_dest + len_src);
}

/*int	main(void)
{
	printf ("\n----- func: ft_strlcat -----\n");
		char dest1[14] = "a";
		printf("%lu",ft_strlcat(dest1, "lorem ipsum dolor sit amet", 15));
		printf("%s\n", dest1);
}*/