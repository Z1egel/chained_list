/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:02:41 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/14 17:02:42 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)(void *, void *))
{
	if (begin_list)
	{
		while(begin_list)
		{
			if (!(cmp(begin_list->data, data_ref)))
				return (begin_list);
			begin_list = begin_list->next;
		}
	}
	return (NULL);
}