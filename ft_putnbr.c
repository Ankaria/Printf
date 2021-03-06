/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:43:15 by elerika           #+#    #+#             */
/*   Updated: 2021/11/11 17:43:17 by elerika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *i)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*i) += 11;
	}
	else
	{
		if (n < 0)
		{
			n = (-1) * n;
			write(1, "-", 1);
			(*i)++;
		}
		if (n <= 9)
		{
			n = n + '0';
			write(1, &n, 1);
			(*i)++;
		}
		else
		{
			ft_putnbr((n / 10), i);
			ft_putnbr((n % 10), i);
		}
	}
}
