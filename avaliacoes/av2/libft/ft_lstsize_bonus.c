/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:16:47 by migupere          #+#    #+#             */
/*   Updated: 2023/05/08 12:25:49 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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
	printf("%s", "ft_lstsize = ");
	printf("%d\n", ft_lstsize(list));
	return(0);
}*/