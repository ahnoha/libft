/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:29:02 by nerraou           #+#    #+#             */
/*   Updated: 2021/11/07 14:36:47 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*next;

	next = NULL;
	head = *lst;
	while (head != NULL)
	{
		next = head->next;
		del(head->content);
		free(head);
		head = next;
	}
	*lst = NULL;
}
