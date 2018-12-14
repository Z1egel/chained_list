/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:11:48 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/14 17:11:50 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*prev;
	t_list	*next;
	t_list	*head;

	prev = NULL;
	next = NULL;
	head = *begin_list;
	if (*begin_list)
	{
		while(*begin_list)
		{
			next = (*begin_list)->next;
			if (!cmp((*begin_list)->data, data_ref))
			{
				free(*begin_list);
				if (!next && !prev)
					head = NULL;
				if (!next && prev)
					prev->next = NULL;
				if (!prev)
					head = next;
				else
					prev->next = next;
			}
			else
				prev = *begin_list;
			*begin_list = next;
		}
		*begin_list = head;
	}
}