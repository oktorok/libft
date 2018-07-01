/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtomyd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <jagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 01:24:44 by jagarcia          #+#    #+#             */
/*   Updated: 2018/01/28 21:39:06 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_myfloat	ft_dtomyd(unsigned long int d)
{
	t_myfloat	n;

	n.mantissa = ((d << 11) | 0x8000000000000000) >> 11;
	n.exponent = ((d << 1) >> 53) - 1075;
	return (n);
}
