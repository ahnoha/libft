/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:50:55 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/10 11:27:14 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;
	size_t	area;

	if (!little[0])
		return ((char *)(big));
	l_len = ft_strlen(little);
	i = 0;
	area = len - l_len;
	if (len < l_len)
		return (NULL);
	while (i <= area && big[i])
	{
		if (ft_strncmp(big + i, little, l_len) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
