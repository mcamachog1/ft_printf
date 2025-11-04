/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:36:49 by macamach          #+#    #+#             */
/*   Updated: 2025/10/28 09:54:40 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
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
	char	content[5] = "Hola";
	t_list	*my_list;
	t_list	**p_list;

	str1 = malloc(5);
	ft_strlcpy(str1, content, 13);
	my_list = ft_lstnew(str1);
	str2 = malloc(13);
	ft_strlcpy(str2, " como estas?", 13);
	p_list = &my_list;

	ft_lstadd_back(p_list, ft_lstnew(str2));
	ft_lstprint(my_list);
}
*/
