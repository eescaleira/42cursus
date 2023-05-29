/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:58:26 by migupere          #+#    #+#             */
/*   Updated: 2023/05/20 15:31:59 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_put_hex(n / 16, format);
		ft_put_hex(n % 16, format);
	}
	else
	{
		if (n <= 9)
		{
			ft_putchar_fd(n + '0', 1);
		}
		else
		{
			if (format == 'x')
				ft_putchar_fd(n - 10 + 'a', 1);
			else if (format == 'X')
				ft_putchar_fd(n - 10 + 'A', 1);
		}
	}
}

int	ft_print_hex(unsigned int n, const char format)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	ft_put_hex(n, format);
	return (len + ft_nbrlen(n, 16));
}
