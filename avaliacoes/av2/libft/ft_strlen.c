/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:43:22 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:47:38 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/*int	main(void)
{
	printf ("\n----- func: ft_strlen -----\n");
	char	a[] = "Porto";
	printf("%lu\n", ft_strlen(a));
}*/