/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:31:53 by awissade          #+#    #+#             */
/*   Updated: 2023/12/04 13:48:15 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_putstr(char *str, int *i, int *count)
{
	int	len;

	if (!str)
	{
		write(1, "(null)", 6);
		*count += 6;
		*i += 1;
		return ;
	}
	len = 0;
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	*i += 1;
	*count += len;
}
