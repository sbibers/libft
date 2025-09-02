/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbibers <sbibers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:51:54 by sbibers           #+#    #+#             */
/*   Updated: 2025/09/02 17:14:28 by sbibers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_len(int n)
{
	size_t	len;

	len = (n < 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*fill_string(int n, int len)
{
	char	*str;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	len--;
	while (n)
	{
		str[len] = n % 10 + 48;
		len--;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t		len;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = num_len(n);
	return (fill_string(n, len));
}
