/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:02:05 by dtiara            #+#    #+#             */
/*   Updated: 2021/04/25 17:44:27 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	char	c_c;

	s1 = (char *) s + ft_strlen(s);
	c_c = (char) c;
	while (s1 >= s)
	{
		if (*s1 == c_c)
			return (s1);
		s1--;
	}
	return (NULL);
}
