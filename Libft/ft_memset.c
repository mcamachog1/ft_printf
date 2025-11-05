/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:34:09 by macamach          #+#    #+#             */
/*   Updated: 2025/10/15 11:02:15 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_pointer;

	new_pointer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		new_pointer[i] = c;
		i++;
	}
	return (s);
}
