/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiara <dtiara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:23:26 by dtiara            #+#    #+#             */
/*   Updated: 2021/06/22 18:26:52 by dtiara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
	if (n < 0)
		return (ft_digitcount(n) + 1);
	else
		return (ft_digitcount(n));
}
