/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:55:15 by macamach          #+#    #+#             */
/*   Updated: 2025/10/28 10:04:39 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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

static void delcontent(void *str)
{
	free(str);
}

int main(void)
{
	char *str1;
	char *str2;
	t_list *my_list;

	str1 = malloc(5);
	ft_strlcpy(str1, "Hola", 5);
	my_list = ft_lstnew((void *)str1);

	str2 = malloc(13);
	ft_strlcpy(str2, " como estas?", 13);
	my_list->next = ft_lstnew((void *)str2);

	ft_lstprint(my_list);
	ft_lstdelone(my_list->next, delcontent);
	ft_lstprint(my_list);

	return (0);
}
*/