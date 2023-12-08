/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:55:14 by awissade          #+#    #+#             */
/*   Updated: 2023/12/04 18:08:03 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include<unistd.h>
# include<stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putcapitalhex(unsigned int num, int *i, int *count);
void	ft_putchar(char c, int *i, int *count);
void	ft_puthex(unsigned int num, int *i, int *count);
void	ft_putnbr(int num, int *i, int *count);
void	ft_putptr(unsigned long num, int *i, int *count);
void	ft_putsign(char c, int *i, int *count);
void	ft_putstr(char *str, int *i, int *count);
void	ft_putunsigned(unsigned int num, int *i, int *count);

#endif
