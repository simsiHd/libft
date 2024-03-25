/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:48:55 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/17 17:09:51 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c;
	char	*s3;

	c = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(c + 1);
	if (s3 == NULL)
		return (NULL);
	c = 0;
	while (s1 && *s1 != '\0')
		s3[c++] = *s1++;
	while (s2 && *s2 != '\0')
		s3[c++] = *s2++;
	s3[c] = '\0';
	return (s3);
}
