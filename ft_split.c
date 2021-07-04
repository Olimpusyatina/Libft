/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:35:29 by dtiara            #+#    #+#             */
/*   Updated: 2021/05/09 13:56:42 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getcount(char const *s, char c)
{
	size_t	i;
	size_t	count;
	bool	word;

	i = 0;
	count = 0;
	word = false;
	while (s[i])
	{
		if (word && s[i] == c)
		{
			count++;
			word = false;
		}
		else if (s[i] != c)
			word = true;
		i++;
	}
	if (word == true)
		count++;
	return (count);
}

static void	ft_getsplit(char **arr, char *s1, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (s1[i] != c)
		{
			j = 0;
			while (s1[i + j] != c && s1[i + j])
				j++;
			arr[count++] = ft_substr(s1, i, j);
			i += j;
		}
		else
			i++;
	}
	arr[count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*s1;
	size_t	count;

	if (!s)
		return (NULL);
	arr = NULL;
	s1 = (char *)s;
	count = ft_getcount(s, c) + 1;
	arr = (char **)ft_calloc(count, sizeof(char *));
	if (arr == NULL)
		return (NULL);
	ft_getsplit(arr, s1, c);
	return (arr);
}
