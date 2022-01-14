/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:16:12 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/04 10:42:01 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	d_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	d_len = dst_len;
	i = dst_len;
	if (dst_len > dstsize - 1 || dstsize == 0)
		return (dstsize + src_len);
	while (i < dstsize - 1 && *src)
	{
		dst[d_len] = *src;
		src++;
		i++;
		d_len++;
	}
	dst[d_len] = '\0';
	return (dst_len + src_len);
}
