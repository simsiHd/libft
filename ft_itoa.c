/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:53:41 by dsimsek           #+#    #+#             */
/*   Updated: 2024/03/20 20:23:26 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_count(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len--] = '0' + (n % 10) * sign;
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
