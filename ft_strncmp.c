/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:22:43 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/08 10:30:55 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;
	int					diff;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	diff = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		diff = str1[i] - str2[i];
		if (diff != 0)
			break ;
		i++;
	}
	return (diff);
}
