/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:33:58 by migupere          #+#    #+#             */
/*   Updated: 2023/05/20 15:16:40 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_nbr(int nbr);
int		ft_print_percent(void);
void	ft_put_hex(unsigned int n, const char format);
int		ft_print_hex(unsigned int n, const char format);
int		ft_nbrlen(unsigned int n, unsigned int base);
char	*ft_uitoa(unsigned int n);
int		ft_formats(va_list args, const char *str, size_t *m);
int		ft_print_unsigned(unsigned int n);
int		ft_print_pointer(unsigned long long n);
int		ft_count_hex(unsigned long n);
void	ft_put_address(unsigned long long n);

#endif