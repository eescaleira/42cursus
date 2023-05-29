/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:19:38 by migupere          #+#    #+#             */
/*   Updated: 2023/05/08 12:34:55 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*void	ft_putstr(char *s)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}
int	main(void)
{
	t_list	*list;
	t_list	*str0;
	t_list	*str1;
	list = ft_lstnew("Amanha");
	str0 = ft_lstnew(" vou");
	str1 = ft_lstnew(" comer");
	list->next = str0;
	str0->next = str1;
	printf("%s\n\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	printf("%s\n", "ft_lstlast: ");
	print_list(ft_lstlast(list));
	return(0);
}*/