/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:33:01 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/14 16:33:02 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_print_letter(void *data)
{
	printf("%c ", *(char*)(data));
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list)
	{
		while (begin_list)
		{
			(*f)(begin_list->data);
			begin_list = begin_list->next;
		}
	}
}