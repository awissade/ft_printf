/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:12:48 by awissade          #+#    #+#             */
/*   Updated: 2023/12/03 16:58:44 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_putunsigned(unsigned int num, int *i, int *count)
{
	char	tmp;

	if (i)
		*i += 1;
	if (num / 10 > 0)
		ft_putunsigned(num / 10, NULL, count);
	tmp = '0' + (num % 10);
	write(1, &tmp, 1);
	*count += 1;
}
