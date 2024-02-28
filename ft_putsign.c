/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:46:28 by awissade          #+#    #+#             */
/*   Updated: 2023/12/03 12:48:17 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_putsign(char c, int *i, int *count)
{
	write(1, &c, 1);
	*i += 1;
	*count += 1;
}
