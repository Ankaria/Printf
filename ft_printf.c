/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:32:00 by elerika           #+#    #+#             */
/*   Updated: 2021/11/04 22:32:18 by elerika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, str);
	if (!str)
		return (0);
	while (*str)
	{
		if (*str && *str != '%')
		{
			write(1, str, 1);
			i++;
		}
		if (*str == '%')
		{
			str++;
			ft_parser((char *)str, ap, &i);
		}
		str++;
	}
	va_end(ap);
	return (i);
}
