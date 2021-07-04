/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:34:58 by dtiara            #+#    #+#             */
/*   Updated: 2021/04/24 13:14:55 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*arr1;
	unsigned char	*arr2;

	i = 0;
	arr1 = (unsigned char *)s1;
	arr2 = (unsigned char *)s2;
	while (i < n && arr1[i] == arr2[i])
		i++;
	if (i == n)
		return (0);
	return (arr1[i] - arr2[i]);
}
