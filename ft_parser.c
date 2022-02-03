/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:36:57 by elerika           #+#    #+#             */
/*   Updated: 2021/12/02 21:37:04 by elerika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parser(char *c, va_list ap, int	*i)
{
	if (*c == 'c')
		ft_putchar((va_arg (ap, int)), i);
	else if (*c == 's')
		ft_putstr((va_arg(ap, char *)), i);
	else if (*c == 'p')
	{
		write(1, "0x", 2);
		(*i) += 2;
		ft_p((va_arg(ap, unsigned long long)), i);
	}
	else if (*c == 'd' || *c == 'i')
		ft_putnbr((va_arg(ap, int)), i);
	else if (*c == 'u')
		ft_u((va_arg(ap, unsigned int)), i);
	else if (*c == 'x')
		ft_x((va_arg(ap, unsigned int)), i);
	else if (*c == 'X')
		ft_x_upper((va_arg(ap, unsigned int)), i);
	else if (*c == '%')
	{
		write(1, "%", 1);
		(*i)++;
	}
}
