/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:46:23 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/10 11:38:41 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
