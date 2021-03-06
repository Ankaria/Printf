/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:17:54 by elerika           #+#    #+#             */
/*   Updated: 2021/11/11 19:17:56 by elerika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char	*c, int	*i)
{
	if (!c)
	{
		write(1, "(null)", 6);
		(*i) += 6;
		return ;
	}
	while (*c)
	{
		write(1, c++, 1);
		(*i)++;
	}
}
