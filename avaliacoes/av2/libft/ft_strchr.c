/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:35:54 by migupere          #+#    #+#             */
/*   Updated: 2023/05/09 14:37:27 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	m1;

	m1 = ((unsigned char) c);
	while (*s && *s != m1)
		s++;
	if (*s == m1)
		return ((char *)s);
	else
		return (NULL);
}

/*int	main(void)
{
	printf ("\n----- func: ft_strchr -----\n");
	char	str3[] = "Hello World";
	printf("Found char: %s\n", ft_strchr(str3, 'o'));

}*/