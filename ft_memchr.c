/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:05:32 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/13 17:31:09 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str = (const unsigned char *)s;

	while (n != 0)
	{
		if ((unsigned char)c == *str)
		{
			return ((void *)str);
		}
		n--;
		str++;
	}
	return (NULL);
}
