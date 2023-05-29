/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:42:43 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:52:44 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf ("\n----- func: ft_isascii -----\n");
	printf ("%i\n", ft_isascii ('?'));
	printf ("%i\n", ft_isascii (130));
}*/