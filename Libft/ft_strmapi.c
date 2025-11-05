/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:08:39 by macamach          #+#    #+#             */
/*   Updated: 2025/10/21 13:33:01 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*results;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	results = malloc(size + 1);
	if (results == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		results[i] = f(i, s[i]);
		i++;
	}
	results[i] = '\0';
	return (results);
}
