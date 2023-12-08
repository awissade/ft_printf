/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:32:18 by awissade          #+#    #+#             */
/*   Updated: 2023/12/03 16:48:05 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_puthex(unsigned int num, int *i, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (num / 16 > 0)
		ft_puthex(num / 16, NULL, count);
	write(1, &base[num % 16], 1);
	*count += 1;
	if (i)
		*i += 1;
}
