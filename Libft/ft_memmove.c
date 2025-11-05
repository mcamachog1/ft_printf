/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:29:02 by macamach          #+#    #+#             */
/*   Updated: 2025/10/27 09:43:27 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*bytes_dst;
	unsigned char	*bytes_src;
	size_t			i;

	bytes_dst = (unsigned char *)dst;
	bytes_src = (unsigned char *)src;
	if (dst < src)
	{
		i = 0;
		while (i < n)
		{
			bytes_dst[i] = bytes_src[i];
			i++;
		}
	}
	else if (dst > src)
	{
		i = n;
		while (i > 0)
		{
			bytes_dst[i - 1] = bytes_src[i - 1];
			i--;
		}
	}
	return (dst);
}
