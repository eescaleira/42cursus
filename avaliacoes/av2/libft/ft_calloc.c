/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:02:28 by migupere          #+#    #+#             */
/*   Updated: 2023/05/08 16:10:45 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = ((char *) malloc(nmemb * size));
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*void print_array(void *ptr, size_t jump, int n)
{
	printf("{ ");
	for(int i = 0; i < n; i++)
	{
		if(jump == 4)
			printf("%d ", ((int *)ptr)[i]);
		else
			printf("0x%02X ", ((char *)ptr)[i]);
	}
	printf("}\n");
}

int main(void)
{
	int *t1 = NULL;
	int *t2 = NULL;
	size_t n1 = 10;
	
	char *t3 = NULL;
	char *t4 = NULL;
	size_t n2 = 1;
	
	printf(("\n----- func: calloc -----\n"));
	
	t1 = calloc(n1, sizeof(int));
	printf("Result:\n\ttest1 =  ");
	print_array(t1, sizeof(int), n1);
	
	printf("\n----- func: ft_calloc -----\n");
	
	t2 = ft_calloc(n1, sizeof(int));
	printf("Result:\n\ttest1 =  ");
	print_array(t2, sizeof(int), n1);
	
	printf("\n----- func: calloc -----\n");
	
	t3 = calloc(n1, sizeof(char));
	printf("Result:\n\ttest2 =  ");
	print_array(t3, sizeof(char), n2);
	
	printf("\n----- func: ft_calloc -----\n");
	
	t4 = ft_calloc(n1, sizeof(char));
	printf("Result:\n\ttest2 =  ");
	print_array(t4, sizeof(char), n2);

	free(t1);
	free(t2);
	free(t3);
	free(t4);
}*/