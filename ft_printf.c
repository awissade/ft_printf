/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:56:39 by awissade          #+#    #+#             */
/*   Updated: 2023/12/06 09:27:12 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

static void	ft_check(const char *str, int *i, int *count, va_list args)
{
	if (str[*i] == '%' && str[*i + 1] == 'c')
		ft_putchar(va_arg(args, int), i, count);
	else if (str[*i] == '%' && str[*i + 1] == 's')
		ft_putstr(va_arg(args, char *), i, count);
	else if (str[*i] == '%' && str[*i + 1] == 'p')
		ft_putptr(va_arg(args, unsigned long), i, count);
	else if (str[*i] == '%' && (str[*i + 1] == 'd' || str[*i + 1] == 'i'))
		ft_putnbr(va_arg(args, int), i, count);
	else if (str[*i] == '%' && str[*i + 1] == 'u')
		ft_putunsigned(va_arg(args, unsigned int), i, count);
	else if (str[*i] == '%' && str[*i + 1] == 'x')
		ft_puthex(va_arg(args, unsigned int), i, count);
	else if (str[*i] == '%' && str[*i + 1] == 'X')
		ft_putcapitalhex(va_arg(args, unsigned int), i, count);
	else if (str[*i] == '%' && str[*i + 1] == '%')
		ft_putsign(str[*i + 1], i, count);
	else
	{
		write(1, &str[*i], 1);
		*count += 1;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!str)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%'
			&& (str[i + 1] == '\0'
				|| (str[i + 1] >= '0' && str[i + 1] <= '9')))
			return (-1);
		else
			ft_check(str, &i, &count, args);
		i++;
	}
	va_end(args);
	return (count);
}
