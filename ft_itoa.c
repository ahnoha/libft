/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:48:32 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/08 17:02:46 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i = 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	check_insert(char *num, int n, size_t len)
{
	int	i;

	i = len;
	if (n < 0)
	{
		while (i > 0)
		{
			num[i - 1] = '0' - n % 10;
			n /= 10;
			i--;
		}
		num[i] = '-';
	}
	else
	{
		while (i >= 0)
		{
			num[i - 1] = '0' + n % 10;
			n /= 10;
			i--;
		}
	}
	num[len] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*num;

	len = ft_numlen(n);
	num = (char *)malloc(sizeof(char ) * (len + 1));
	if (!num)
		return (NULL);
	check_insert(num, n, len);
	return (num);
}
