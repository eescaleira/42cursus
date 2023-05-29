/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_std.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:56:24 by migupere          #+#    #+#             */
/*   Updated: 2023/05/20 15:48:35 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	int	len;

	len = 0;
	ft_putchar_fd(c, 1);
	len += 1;
	return (len);
}

int	ft_print_str(char *str)
{
	int	len;

	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}

int	ft_print_nbr(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
	len = ft_print_str(str);
	free(str);
	return (len);
}

int	ft_print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
