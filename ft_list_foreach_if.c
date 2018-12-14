/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:50:28 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/14 16:50:29 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int 	ft_list_cmp(void *data, void *norme)
{
	return (*(char*)data - *(char*)norme);
}

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *))
{
	if (begin_list)
	{
		while (begin_list)
		{
			if (!(*cmp)(begin_list->data, data_ref))
				(*f)(begin_list->data);
			begin_list = begin_list->next;
		}
	}
}