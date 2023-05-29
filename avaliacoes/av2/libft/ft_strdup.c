/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:21:37 by migupere          #+#    #+#             */
/*   Updated: 2023/05/05 16:10:23 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*a;

	len = (ft_strlen (s) + 1);
	a = (char *) malloc (len);
	if (a == 0)
		return (NULL);
	ft_memcpy (a, s, len);
	return (a);
}

/*int main(void)
{
    char str[] = "Hello, world!";
    char *str_copy;

    str_copy = ft_strdup(str);

    if (str_copy == NULL)
    {
        printf("Error: ft_strdup returned NULL\n");
        return 1;
    }

    printf("Original string: %s\n", str);
    printf("Copy of string: %s\n", str_copy);

    free(str_copy);

    return 0;
}*/