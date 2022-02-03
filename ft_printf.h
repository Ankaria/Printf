/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:32:38 by elerika           #+#    #+#             */
/*   Updated: 2021/11/04 22:32:40 by elerika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int   ft_printf(const char *str, ...);
void  ft_parser(char *c, va_list ap, int	*i);
void  ft_putchar(char c, int *i);
void  ft_p(unsigned long long int n, int *i);
void  ft_u(unsigned int n, int *i);
void  ft_x(unsigned int n, int *i);
void  ft_x_upper(unsigned int c, int *i);
void  ft_putstr(char *c, int *i);
void  ft_putnbr(int n, int *i);

#endif
