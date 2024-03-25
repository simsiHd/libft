/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:52:42 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/05 09:59:48 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l;

	l = 0;
	if (dstsize == 0)
	{
		while (src[l])
			l++;
		return (l);
	}
	while (l < dstsize - 1 && src[l] != '\0')
	{
		dst[l] = src[l];
		l++;
	}
	if (l < dstsize)
		dst[l] = '\0';
	while (src[l] != '\0')
		l++;
	return (l);
}
