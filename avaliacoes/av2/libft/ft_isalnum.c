/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:36:54 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:52:17 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf ("\n----- func: ft_isalnum -----\n");
	printf ("%i\n", ft_isalnum ('m'));
	printf ("%i\n", ft_isalnum ('7'));
	printf ("%i\n", ft_isalnum ('?'));
}*/