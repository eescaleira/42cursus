/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:53:08 by migupere          #+#    #+#             */
/*   Updated: 2023/05/20 15:37:45 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hex(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 16;
		count++;
	}
	return (count);
}

void	ft_put_address(unsigned long long n)
{
	if (n >= 16)
	{
		ft_put_address(n / 16);
		ft_put_address(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_print_pointer(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += ft_print_str("(nil)");
	else
	{
		ft_putstr_fd("0x", 1);
		len += 2;
		ft_put_address(n);
		len += ft_count_hex(n);
	}
	return (len);
}
