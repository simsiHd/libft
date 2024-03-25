/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:34:22 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/25 18:16:12 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *s, char c);
static void		ft_free(char **str);
static int		split2(char const *s, char c, char **str, int b);
static int		ac(char **str, const char *s, int i, int *j);

char	**ft_split(char const *s, char c)
{
	int		b;
	char	**str;

	b = ft_count(s, c);
	str = (char **)malloc((b + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	if (!split2(s, c, str, b))
		return (NULL);
	return (str);
}

static int	split2(char const *s, char c, char **str, int b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s && *s == c)
		s++;
	while (j < b && *s)
	{
		if (s[i] != c)
			i++;
		if (s[i] == c || !s[i])
		{
			if (!ac(str, s, i, &j))
				return (0);
			while (s[i] && s[i] == c)
				i++;
			s += i;
			i = 0;
		}
	}
	str[j] = NULL;
	return (1);
}

static int	ac(char **str, const char *s, int i, int *j)
{
	str[*j] = (char *)malloc(sizeof(char) * (i + 1));
	if (str[*j] == NULL)
	{
		ft_free(str);
		return (0);
	}
	ft_strlcpy(str[*j], s, i + 1);
	str[*j][i] = '\0';
	(*j)++;
	return (1);
}

static int	ft_count(const char *s, char c)
{
	int	counter;
	int	dif;

	counter = 0;
	dif = 0;
	if (c == 0)
		return (1);
	while (s && *s)
	{
		if (*s && *s != c && dif == 0)
		{
			dif = 1;
			counter++;
		}
		else if (*s && *s == c)
			dif = 0;
		s++;
	}
	return (counter);
}

static void	ft_free(char **str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		free(str[j]);
		j++;
	}
	free(str);
}
