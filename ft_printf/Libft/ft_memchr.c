/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:56:34 by macamach          #+#    #+#             */
/*   Updated: 2025/10/21 10:08:19 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	pointer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pointer[i] == (unsigned char)c)
			return ((void *)(pointer + i));
		i++;
	}
	return (NULL);
}
