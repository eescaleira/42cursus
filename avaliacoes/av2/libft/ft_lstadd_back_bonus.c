/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:22:36 by migupere          #+#    #+#             */
/*   Updated: 2023/05/09 18:05:02 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

/*int main(void)
{
    t_list *lst = NULL;
    t_list *new1 = ft_lstnew("Hello");
    t_list *new2 = ft_lstnew("world");
    t_list *new3 = ft_lstnew("!");

    ft_lstadd_back(&lst, new1);
    ft_lstadd_back(&lst, new2);
    ft_lstadd_back(&lst, new3);

    while (lst)
    {
        printf("%s ", (char *)lst->content);
        lst = lst->next;
    }
	return (0);
}*/