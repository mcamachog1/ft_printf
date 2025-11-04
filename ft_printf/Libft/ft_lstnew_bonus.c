/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:46:35 by macamach          #+#    #+#             */
/*   Updated: 2025/10/28 08:46:41 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
t_list *ft_lstnew(void *content)
{
	t_list	*my_struct;

	my_struct = malloc(sizeof(t_list));
	if (my_struct == NULL)
		return (NULL);
	(*my_struct).content = content;
	(*my_struct).next = NULL;
	return (my_struct);
}

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
	char	content[10] = "Hola";
	t_list	*my_list;

	str1 = malloc(5);
	ft_strlcpy(str1, content, 5);
	my_list = ft_lstnew(str1);
	str2 = malloc(13);
	ft_strlcpy(str2, " como estas?", 13);
	my_list->next = ft_lstnew(str2);
	ft_lstprint(my_list);
}
*/