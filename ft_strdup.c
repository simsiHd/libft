/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:52:51 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/15 16:43:48 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	count;
	char	*p1;
	char	*p2;

	count = 0;
	while (s1[count] != '\0')
	{
		count++;
	}
	s2 = (char *)malloc(count + 1);
	if (s2 != NULL)
	{
		p1 = (char *)s1;
		p2 = s2;
		while (*p1 != '\0')
		{
			*p2 = *p1;
			p2++;
			p1++;
		}
		*p2 = '\0';
	}
	return (s2);
}
