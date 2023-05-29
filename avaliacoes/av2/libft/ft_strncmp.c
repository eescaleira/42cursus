/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:07:44 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:48:56 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	m;

	m = 0;
	while (s1[m] == s2[m] && s1[m] != '\0' && s2[m] != '\0' && m < n)
	{
		m++;
	}
	if (m == n)
		return (0);
	else
		return ((unsigned char)s1[m] - (unsigned char)s2[m]);
}

/*int	main(void)
{
	printf ("\n----- func: ft_strncmp -----\n");
	//char	d[] = "hellW";
	//char	e[] = "hello";
	//printf("%d\n", ft_strncmp(d, e, 15));
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("%d\n", strncmp("test\200", "test\0", 6));
}*/