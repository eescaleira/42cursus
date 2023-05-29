/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:54:11 by migupere          #+#    #+#             */
/*   Updated: 2023/05/05 15:24:45 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	m;

	m = n;
	if (m < 0)
	{
		ft_putchar_fd('-', fd);
		m *= -1;
	}
	if (m > 9)
		ft_putnbr_fd(m / 10, fd);
	ft_putchar_fd(m % 10 + '0', fd);
}

/*int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}*/