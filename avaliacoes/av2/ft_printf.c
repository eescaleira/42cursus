/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:57:06 by migupere          #+#    #+#             */
/*   Updated: 2023/05/20 15:16:53 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char *str, size_t *m)
{
	int	buffer;

	buffer = 0;
	if (str[*m] == 'c')
		buffer += ft_print_char(va_arg(args, int));
	if (str[*m] == '%')
		buffer += ft_print_percent();
	if (str[*m] == 's')
		buffer += ft_print_str(va_arg(args, char *));
	if (str[*m] == 'd')
		buffer += ft_print_nbr(va_arg(args, int));
	if (str[*m] == 'i')
		buffer += ft_print_nbr(va_arg(args, int));
	if (str[*m] == 'u')
		buffer += ft_print_unsigned(va_arg(args, unsigned int));
	if (str[*m] == 'x')
		buffer += ft_print_hex(va_arg(args, unsigned int), 'x');
	if (str[*m] == 'X')
		buffer += ft_print_hex(va_arg(args, unsigned int), 'X');
	if (str[*m] == 'p')
		buffer += ft_print_pointer(va_arg(args, unsigned long long));
	return (buffer);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		buffer;

	buffer = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			buffer += ft_formats(args, str, &i);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			buffer++;
		}
		i++;
	}
	va_end(args);
	return (buffer);
}
