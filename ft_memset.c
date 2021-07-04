/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:16:38 by dtiara            #+#    #+#             */
/*   Updated: 2021/04/25 12:50:47 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr_b;
	unsigned char	c_c;

	i = 0;
	ptr_b = (unsigned char *) b;
	c_c = (unsigned char) c;
	while (i < len)
	{
		ptr_b[i++] = c_c;
	}
	return (b);
}
