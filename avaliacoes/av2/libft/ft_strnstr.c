/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:49:47 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:49:33 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	j = 0;
	while (j < len && big[j])
	{
		i = 0;
		while (j < len && little[i] && big[j] && little[i] == big[j])
		{
			++i;
			++j;
		}
		if (little[i] == '\0')
			return ((char *)&big[j - i]);
		j = j - i + 1;
	}
	return (0);
}

/*int	main(void)
{
	printf ("\n----- func: ft_strnstr -----\n");
	char    *s1 = "Banana split";
    char    *s2 = "s";
    size_t  max = strlen(s1);
	char    *i1 = ft_strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);
	printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
}*/