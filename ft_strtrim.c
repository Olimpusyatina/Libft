/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:18:25 by dtiara            #+#    #+#             */
/*   Updated: 2021/05/10 10:54:53 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_start_position(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	return (i);
}

static size_t	ft_get_end_position(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i >=0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!set || !s1)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_calloc(1, 1));
	start = ft_get_start_position(s1, set);
	if (start == ft_strlen(s1))
		return (ft_calloc(1, 1));
	end = ft_get_end_position(s1, set);
	if (start > end)
		return (NULL);
	return (ft_substr(s1, start, end - start + 1));
}
