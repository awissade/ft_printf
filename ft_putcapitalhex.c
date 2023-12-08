/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcapitalhex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:58:23 by awissade          #+#    #+#             */
/*   Updated: 2023/12/03 15:40:02 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_putcapitalhex(unsigned int num, int *i, int *count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (num / 16 != 0)
		ft_putcapitalhex(num / 16, NULL, count);
	write(1, &base[num % 16], 1);
	*count += 1;
	if (i)
		*i += 1;
}
