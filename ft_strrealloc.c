/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:36:46 by jagarcia          #+#    #+#             */
/*   Updated: 2017/11/13 21:31:16 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrealloc(char *ptr, size_t size)
{
	char	*dest;
	size_t	len;

	if (!ptr)
		return (ft_strnew(size));
	len = ft_strlen(ptr);
	if (len >= size)
		return (ptr);
	dest = ft_strnew(size);
	if (!dest)
		return (dest);
	dest = ft_strcpy(dest, ptr);
	return (dest);
}
