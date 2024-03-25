/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:25:57 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/12 15:58:09 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*l = NULL;

	while (*s != '\0')
	{
		if (*s == (char )c)
		{
			l = s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return ((char *)(l));
}
