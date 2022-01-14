/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:33:41 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/07 17:02:40 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isexists(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_strtrimlen(char const *s1, char const *set)
{
	size_t	len;
	size_t	total_len;
	size_t	i;
	int		t;

	i = 0;
	t = 0;
	len = ft_strlen(s1);
	total_len = len;
	while (s1[i])
	{
		if (!ft_isexists(set, s1[i]))
			break ;
		i++;
		t++;
	}
	while (--len > i)
	{
		if (!ft_isexists(set, s1[len]))
			break ;
		t++;
	}
	return (total_len - t);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*tab;
	int		i;

	i = 0;
	len = ft_strtrimlen(s1, set);
	if (len == 0)
		return (ft_strdup(""));
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		if (!ft_isexists(set, s1[i]))
			break ;
		i++;
	}
	ft_strncpy(tab, s1 + i, len);
	tab[len] = '\0';
	return (tab);
}
