/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:53:29 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:59:08 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	printf ("\n----- func: ft_strrchr -----\n");
	char	str4[] = "Hello World";
	printf ("Found char: %s\n", ft_strrchr(str4, 'o' + 256));
}*/