/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:38:18 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/25 15:22:39 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	trim(const char *set, char s);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	if (!s1 || !*s1)
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (trim(set, s1[start]))
		start++;
	while (trim(set, s1[end]))
		end--;
	end++;
	if (start >= end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start));
}

int	trim(const char *set, char s)
{
	int	i;

	i = 0;
	while (set && set[i])
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}
