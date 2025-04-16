/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:11:21 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/14 09:49:18 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <math.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
