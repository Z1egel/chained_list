/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:06:09 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/14 16:06:10 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*next;

	prev = NULL;
	if (*begin_list)
	{
		while(*begin_list)
		{
			next = (*begin_list)->next;
			(*begin_list)->next = prev;
			prev = *begin_list;
			*begin_list = next;
		}
		*begin_list = prev;
	}
}