/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:24:12 by dtiara            #+#    #+#             */
/*   Updated: 2021/05/07 12:08:45 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	s1 = (char *)ft_calloc(sizeof(char), len + 1);
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	return (s1);
}
