/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:27:38 by migupere          #+#    #+#             */
/*   Updated: 2023/05/08 12:56:39 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}

/*void my_free(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list1 = malloc(sizeof(t_list));
    t_list *list2 = malloc(sizeof(t_list));
    t_list *list3 = malloc(sizeof(t_list));

    if (list1 == NULL || list2 == NULL || list3 == NULL)
    {
        return 1;
    }

    list1->content = "Hello";
    list2->content = "World";
    list3->content = "!";

    list1->next = list2;
    list2->next = list3;

    ft_lstdelone(list1, &my_free);
    ft_lstdelone(list2, &my_free);
    ft_lstdelone(list3, &my_free);

    printf("Done!\n");

    return 0;
}*/