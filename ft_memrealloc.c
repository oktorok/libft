/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:36:46 by jagarcia          #+#    #+#             */
/*   Updated: 2017/11/13 21:31:16 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrealloc(void **ptr, size_t ptr_size, size_t final_size)
{
	char	*dest;

	if (!*ptr)
		return (ft_memalloc(final_size));
	if (ptr_size >= final_size)
		return (*ptr);
	dest = ft_memalloc(final_size);
	if (!dest)
		return (dest);
	dest = ft_memcpy(dest, *ptr, ptr_size);
	free(ptr);
	return (dest);
}
