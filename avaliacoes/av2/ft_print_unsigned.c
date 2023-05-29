/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:02:57 by migupere          #+#    #+#             */
/*   Updated: 2023/05/20 15:16:58 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned int n, unsigned int base)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n /= base;
	}
	return (count);
}

char	*ft_uitoa(unsigned int n)
{
	char		*str;
	int			i;

	i = ft_nbrlen(n, 10);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if ((!str))
		return (NULL);
	str[i--] = '\0';
	while (n)
	{
		str[i--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*nbr;

	len = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else
	{
		nbr = ft_uitoa(n);
		len = ft_print_str(nbr);
		free(nbr);
	}
	return (len);
}
