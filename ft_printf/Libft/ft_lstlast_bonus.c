/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:47:44 by macamach          #+#    #+#             */
/*   Updated: 2025/10/28 09:35:13 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return (NULL);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
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
	char	content[10] = "Hola";
	t_list	*my_list;

	str1 = malloc(5);
	ft_strlcpy(str1, content, 5);
	my_list = ft_lstnew(str1);
	str2 = malloc(13);
	ft_strlcpy(str2, " como estas?", 13);
	my_list->next = ft_lstnew(str2);
	ft_lstprint(my_list);
	ft_lstprint(ft_lstlast(my_list));
}
*/
