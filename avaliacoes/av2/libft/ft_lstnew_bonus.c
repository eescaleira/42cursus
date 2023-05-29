/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:24:03 by migupere          #+#    #+#             */
/*   Updated: 2023/05/08 12:25:38 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int	main(void)
{
	char	str[] = "Portugal Ole";
	t_list	*str2;
	printf("%s", "str = ");
	printf("%s\n", str);
	str2 = ft_lstnew((void *)str);
	printf("%s", "ft_lstnew((void *)str) = ");
	printf("%s\n", (char *)str2->content);
	return (0);
}*/