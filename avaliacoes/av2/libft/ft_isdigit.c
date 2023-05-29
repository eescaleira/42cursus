/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:31:54 by migupere          #+#    #+#             */
/*   Updated: 2023/05/04 16:51:49 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf ("\n----- func: ft_isdigit -----\n");
	printf ("%i\n", ft_isdigit ('1'));
	printf ("%i\n", ft_isdigit ('m'));
}*/