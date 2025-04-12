/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:44:31 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/12 15:36:02 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	size_t i;
	unsigned char	*ptr;

	ptr = NULL;
	i = 0;
	while (str[i])
	{
		if(str[i] == (char)c)
			ptr = (char *)(str + i);
		i++;
	}
	if (str[i] == (char)c)
		return (char *)(str + i);
	return (ptr);
}
