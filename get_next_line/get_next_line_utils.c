/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:22:44 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/29 18:45:09 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		i;

	i = 0;
	ns = malloc((ft_strlen(s1) + ft_strlen(s2) +1) * sizeof(char));
	if (ns == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)] != '\0')
	{
		ns[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

size_t	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (*(s + x) != '\0')
		x++;
	return (x);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*result;

	j = 0;
	if (!s || start >= ft_strlen((char *)s) || !len)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	result = malloc ((len +1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (j < len)
	{
		result[j] = s[start];
		start++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

char	*ft_strdup(const char *s)
{
	char	*c;
	int		i;
	int		len;

	len = ft_strlen ((char *)s);
	i = 0;
	c = malloc ((len +1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}