/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:40:44 by migupere          #+#    #+#             */
/*   Updated: 2023/05/08 12:19:18 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	if (lst && del)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}

/*int main(void)
{
    t_list *list = NULL;
    int *data1 = malloc(sizeof(int));
    int *data2 = malloc(sizeof(int));
    int *data3 = malloc(sizeof(int));
    *data1 = 10;
    *data2 = 20;
    *data3 = 30;

    ft_lstadd_front(&list, ft_lstnew(data1));
    ft_lstadd_front(&list, ft_lstnew(data2));
    ft_lstadd_front(&list, ft_lstnew(data3));
    printf("Before clearing the list:\n");
    t_list *current = list;
    while (current != NULL)
    {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }
    ft_lstclear(&list, free);
    printf("After clearing the list:\n");
    current = list;
    while (current != NULL)
    {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }
    return (0);
}*/