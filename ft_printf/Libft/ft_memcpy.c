/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:34:38 by macamach          #+#    #+#             */
/*   Updated: 2025/10/23 14:53:20 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*bytes_src;
	unsigned char	*bytes_dest;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	bytes_src = (unsigned char *)src;
	bytes_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		bytes_dest[i] = bytes_src[i];
		i++;
	}
	return (dest);
}
