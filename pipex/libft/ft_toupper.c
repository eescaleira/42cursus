/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:37:54 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/01 17:03:19 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(unsigned int a)
{
	if (a >= 'a' && a <= 'z')
	{
		a = a -32;
	}
	return (a);
}
