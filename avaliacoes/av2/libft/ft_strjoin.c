/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:56:12 by migupere          #+#    #+#             */
/*   Updated: 2023/05/05 15:54:43 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	a;
	unsigned int	b;

	if (!s1 || !s2)
		return (NULL);
	dest = malloc ((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		dest[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b])
	{
		dest[a] = s2[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int main()
{
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char *str_joined;

    str_joined = ft_strjoin(str1, str2);

    if (str_joined == NULL)
    {
        printf("Error: ft_strjoin returned NULL\n");
        return 1;
    }

    printf("Original strings: %s%s\n", str1, str2);
    printf("Joined string: %s\n", str_joined);

    free(str_joined);

    return 0;
}*/