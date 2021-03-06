/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:12:04 by elerika           #+#    #+#             */
/*   Updated: 2021/11/11 17:12:06 by elerika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_u(unsigned int n, int *i)
{
	if (n <= 9)
	{
		n = n + '0';
		write(1, &n, 1);
		(*i)++;
	}
	else
	{
		ft_u((n / 10), i);
		ft_u((n % 10), i);
	}
}
