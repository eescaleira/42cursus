/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:40:03 by migupere          #+#    #+#             */
/*   Updated: 2023/05/08 14:49:10 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
		ptr [i++] = '\0';
}

/*int	main(void)
{
	printf ("\n----- func: ft_bzero -----\n");
	char ptr [50] = "Hello World";
	printf ("Before bzero : %s", ptr);
	ft_bzero (ptr, sizeof(ptr));
	printf ("\nAfter the bzero: %s\n", ptr);
}*/