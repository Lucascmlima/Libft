/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:59:49 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/17 11:15:38 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n);

static int	nsize(int n);

static char	*cstr(char *str, long nb, long len, long sign);

static int	nsize(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*cstr(char *str, long nb, long len, long sign)
{
	str[len] = '\0';
	while (len > 0)
	{
		str[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (sign < 0)
		str[len++] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	len;
	long	nb;
	long	sign;

	nb = n;
	sign = 1;
	len = (long)nsize(nb);
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nb < 0)
	{
		nb = -nb;
		sign = -sign;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str = cstr(str, nb, len, sign);
	return (str);
}
