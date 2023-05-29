/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:32:21 by migupere          #+#    #+#             */
/*   Updated: 2023/05/17 16:06:33 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	m;

	m = n;
	if (m < 0)
	{
		ft_putchar('-');
		m *= -1;
	}
	if (m > 9)
		ft_putnbr(m / 10);
	ft_putchar(m % 10 + '0');
}
