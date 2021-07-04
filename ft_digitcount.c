/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:48:08 by dtiara            #+#    #+#             */
/*   Updated: 2021/05/01 18:00:58 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitcount(int n)
{
	int	count;
	int	nbr;

	if (n == 0 || n == -0)
		return (1);
	nbr = n;
	count = 0;
	nbr = ft_abs(nbr);
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
