/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:05:02 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/14 12:23:47 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	l;

	d = dst;
	s = (char *)src;
	l = 0;
	if (d == s)
	{
		return (dst);
	}
	if (s < d)
		while (len--)
			d[len] = s[len];
	else
	{
		while (l < len)
		{
			d[l] = s[l];
			l++;
		}
	}
	return (dst);
}
