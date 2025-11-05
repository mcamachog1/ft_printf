/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:47:20 by macamach          #+#    #+#             */
/*   Updated: 2025/10/28 08:47:25 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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

	str1 = malloc(5);
	ft_strlcpy(str1, content, 5);
	my_list = ft_lstnew(str1);
	str2 = malloc(13);
	ft_strlcpy(str2, " como estas?", 13);
	my_list->next = ft_lstnew(str2);
	ft_lstprint(my_list);

	printf("Size of the list: %i\n", ft_lstsize(my_list));
}
*/
