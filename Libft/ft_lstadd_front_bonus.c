/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:46:59 by macamach          #+#    #+#             */
/*   Updated: 2025/10/28 08:47:05 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*first_node;

	if (!lst || !new)
		return ;
	first_node = *lst;
	*lst = new;
	new->next = first_node;
}
/*
#include <stdio.h>

static void ft_lstprint(t_list *list)
{
	while (list != NULL)
	{
		printf("%s", (char *)list->content);
		list = list->next;
	}
}

int main(void)
{
	char	*str1;
	char	*str2;
	char	content[13] = " como estas?";
	t_list	*my_list;
	t_list	**p_list;

	str1 = malloc(13);
	ft_strlcpy(str1, content, 13);
	my_list = ft_lstnew(str1);
	str2 = malloc(5);
	ft_strlcpy(str2, "Hola", 5);
	p_list = &my_list;

	ft_lstadd_front(p_list, ft_lstnew(str2));
	ft_lstprint(my_list);

	printf("\nAdress of structure (must be *t_list) %p\n", (void *)my_list);
	printf("Pointer to adress (must be **t_list) %p\n", (void *)p_list);
}
*/