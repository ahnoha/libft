/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:19:13 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/10 11:40:54 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d_str;
	const unsigned char	*s_str;
	size_t				i;

	d_str = dest;
	s_str = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d_str[i] = s_str[i];
		i++;
	}
	return (dest);
}
