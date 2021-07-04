/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:08:13 by dtiara            #+#    #+#             */
/*   Updated: 2021/05/09 13:57:23 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < len)
		s1 = (char *)ft_calloc(sizeof(char), slen + 1);
	else
		s1 = (char *)ft_calloc(sizeof(char), len + 1);
	if (s1 == NULL)
		return (NULL);
	if (start >= slen)
		return (s1);
	i = 0;
	while (i < len && s[start + i])
	{
		s1[i] = s[start + i];
		i++;
	}
	return (s1);
}
