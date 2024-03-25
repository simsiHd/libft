/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:17:49 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/14 12:14:19 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h = haystack;
	const char	*n = needle;
	size_t		i;

	while (*haystack && len > 0)
	{
		i = len;
		h = haystack;
		n = needle;
		while (*h == *n && *n != '\0' && i > 0)
		{
			h++;
			n++;
			i--;
		}
		if (*n == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	if (*needle == '\0')
		return ((char *)haystack);
	return (NULL);
}
