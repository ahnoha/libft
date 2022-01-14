/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:40:28 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/08 16:45:51 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = mem;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((char *)(mem + i));
		i++;
	}
	return (NULL);
}
