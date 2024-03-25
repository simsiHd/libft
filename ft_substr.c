/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:33:01 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/25 15:18:22 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sl;
	char	*sub;

	if (!s || !*s || start >= ft_strlen(s) || len == 0)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	s += start;
	sl = ft_strlen(s);
	if (len > sl)
		sub = malloc(sl + 1);
	else
		sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	sl = 0;
	while (*s && sl < len)
		sub[sl++] = *s++;
	sub[sl] = '\0';
	return (sub);
}
