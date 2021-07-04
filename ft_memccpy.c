/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:34:18 by dtiara            #+#    #+#             */
/*   Updated: 2021/05/09 14:14:17 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	unsigned char	c_c;

	if (!dst && !src)
		return (NULL);
	c_c = (unsigned char) c;
	ptr_dst = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		*ptr_dst++ = ptr_src[i];
		if (ptr_src[i] == c_c)
			return ((void *) ptr_dst);
		i++;
	}
	return (NULL);
}
