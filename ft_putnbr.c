/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:37:43 by awissade          #+#    #+#             */
/*   Updated: 2023/12/03 18:18:02 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_putnbr(int num, int *i, int *count)
{
	char	tmp;
	long	n;
	int		j;

	j = 1;
	n = num;
	if (n < 0)
	{
		write(1, "-", 1);
		*count += 1;
		n = -n;
	}
	while (n / j >= 10)
		j *= 10;
	while (j > 0)
	{
		tmp = '0' + (n / j);
		write(1, &tmp, 1);
		*count += 1;
		n %= j;
		j /= 10;
	}
	*i += 1;
}
