/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:47:42 by awissade          #+#    #+#             */
/*   Updated: 2023/12/04 13:40:18 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_putptr(unsigned long num, int *i, int *count)
{
	char	*base;

	if ((void *)num == NULL)
	{
		write(1, "(nil)", 5);
		*count += 5;
		*i += 1;
		return ;
	}
	base = "0123456789abcdef";
	if (i)
	{
		write(1, "0x", 2);
		*count += 2;
		*i += 1;
	}
	if (num / 16 != 0)
		ft_putptr(num / 16, NULL, count);
	write(1, &base[num % 16], 1);
	*count += 1;
}
