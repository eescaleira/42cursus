/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:24:42 by migupere          #+#    #+#             */
/*   Updated: 2023/05/09 15:26:20 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dest;
	unsigned char	start;
	unsigned char	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while ((s1[end] != s1[start]) && ft_strchr(set, s1[end]))
		end--;
	dest = ft_substr(s1, start, (end - start) + 1);
	if (!dest)
		return (0);
	return (dest);
}

/*int	main(void)
{
	printf("%s", ft_strtrim("abcabialovesabcaa\n", "a"));
	return (0);
}*/