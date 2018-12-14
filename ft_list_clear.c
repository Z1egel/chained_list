/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 19:24:35 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/13 19:24:36 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list)
	{
		while (*begin_list)
		{
			free(*begin_list);
			*begin_list = (*begin_list)->next;
		}
		*begin_list = NULL;
	}
	else
		return ;
}