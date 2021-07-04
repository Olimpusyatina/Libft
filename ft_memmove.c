/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:06:32 by dtiara            #+#    #+#             */
/*   Updated: 2021/04/25 14:31:19 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == src)
		return (dst);
	if ((dst < src) || (dst > (void *)((unsigned long)src + len)))
		return (ft_memcpy(dst, src, len));
	while (len--)
		((unsigned char *)(dst))[len] = ((const unsigned char *)(src))[len];
	return (dst);
}
