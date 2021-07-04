/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:07:45 by dtiara            #+#    #+#             */
/*   Updated: 2021/05/01 18:02:37 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0 || n == -0)
		return (ft_strdup("0"));
	len = ft_digitcount(n);
	if (n < 0)
	{
		len++;
		n = ft_abs(n);
	}
	str = (char *)ft_calloc(sizeof(*str), len + 1);
	if (str == NULL)
		return (NULL);
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (len != 0 && str[1] != '\0')
		str[0] = '-';
	return (str);
}
