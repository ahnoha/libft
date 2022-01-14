/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:50:07 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/11 18:53:20 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_indexof(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strchr(const char *s, int c)
{
	int	len;

	if (c == '\0')
	{
		len = ft_strlen(s);
		return ((char *)(len + s));
	}
	len = ft_indexof(s, c);
	if (len != -1)
		return ((char *)(len + s));
	return (NULL);
}
