/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:32:23 by macamach          #+#    #+#             */
/*   Updated: 2025/10/28 11:39:27 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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

static void f(void *str)
{
	unsigned char	temp;
	char	*string;
	int i;

	string = (char *)str;
	i = 0;
	while (string[i])
	{
		temp = string[i];
		string[i] = (char)ft_toupper((int)temp);
		i++;
	}
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
	ft_lstiter(my_list, f);
	ft_lstprint(my_list);

	return (0);
}
*/